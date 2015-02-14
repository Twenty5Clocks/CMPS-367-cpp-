#include <WinSock2.h>
#include <WS2tcpip.h>
#include <stdio.h>
#include <iostream>
#include <string>

#define DEFAULT_PORT "27015"
#define DEFAULT_BUFLEN 512

using namespace std;

#pragma comment (lib, "Ws2_32.lib")

int main(){
	WSADATA wsaData;

	char recvbuf[DEFAULT_BUFLEN];
	int iResult, iSendResult;
	int recvbuflen = DEFAULT_BUFLEN;
	struct addrinfo *result = NULL, *ptr = NULL, hints;
	char msg[200] = ""; // this array is sent to user as a message
	msg[0] = char(10);
	msg[1] = char(13);
	int msgpos = 2;
	int msglen = sizeof(msg);

	//Initialize WinSock
	iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
	if (iResult != 0) {
		printf("WSAStartup failed %d\n", iResult);
		return 1;
	}else std::cout << "Looks like it worked\n";

	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	hints.ai_flags = AI_PASSIVE;

	//resolve the loval address and port th be used by the server
	iResult = getaddrinfo(NULL, DEFAULT_PORT, &hints, &result);
	if (iResult != 0){
		printf("getaddrinfo failed: %d\n", iResult);
		WSACleanup();
		return 1;
	}else printf("getaddrinfo worked!\n");

	//create a socket fo rthe server to listen to client connections
	SOCKET ListenSocket = INVALID_SOCKET;


	ListenSocket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);

	if (ListenSocket == INVALID_SOCKET){
		printf("Error at socket(): %ld\n", WSAGetLastError());
		freeaddrinfo(result);
		WSACleanup();
		return 1;
	}else printf("ListenSocket worked!\n");

	//Setup the TCP listening socket

	iResult = bind( ListenSocket, result->ai_addr, (int)result->ai_addrlen);
	if (iResult == SOCKET_ERROR){
		printf("bind failed with error: %d\n", WSAGetLastError());
		freeaddrinfo(result);
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}else printf("Bind worked!\n");

	if (listen(ListenSocket, SOMAXCONN) == SOCKET_ERROR){
		printf("Listen failed with an error: %ld\n", WSAGetLastError());
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}else printf("listen worked!\n");

	SOCKET ClientSocket;

	ClientSocket = INVALID_SOCKET;

	//Accent a client socket
	ClientSocket = accept(ListenSocket, NULL, NULL);
	if (ClientSocket == INVALID_SOCKET){
		printf("accept failed: %d\n", WSAGetLastError());
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}else printf("accept worked!\n");

	// Receive until the peer shuts down the connection
do {

    iResult = recv(ClientSocket, recvbuf, recvbuflen, 0);
	//strcat(msg, &recvbuf[0]);
	//cout << msg << endl;
    if (iResult > 0) {
        printf("Bytes received: %d\n", iResult);

        // Echo the buffer back to the sender
		if ((recvbuf[0] >= char(32) && recvbuf[0]<= char(126)) || recvbuf[0] == char(8)) {
			msg[msgpos] = recvbuf[0];
			msgpos++;
		}
		if (recvbuf[0] == char(13)){
			msgpos = 2;
			send (ClientSocket, msg, msglen, 0); //sends msg to telnet client to be printed out.
			memset(msg, NULL, sizeof(msg));
			msg[0] = char(10);
			msg[1] = char(13);
		}
        iSendResult = send(ClientSocket, recvbuf, iResult, 0);
        if (iSendResult == SOCKET_ERROR) {
            printf("send failed: %d\n", WSAGetLastError());
            closesocket(ClientSocket);
            WSACleanup();
            return 1;
        }
        printf("Bytes sent: %d\n", iSendResult);
    } else if (iResult == 0)
        printf("Connection closing...\n");
    else {
        printf("recv failed: %d\n", WSAGetLastError());
        closesocket(ClientSocket);
        WSACleanup();
        return 1;
    }

} while (iResult > 0);

	// shutdown the connection since we're done
    iResult = shutdown(ClientSocket, SD_SEND);
    if (iResult == SOCKET_ERROR) {
        printf("shutdown failed with error: %d\n", WSAGetLastError());
        closesocket(ClientSocket);
        WSACleanup();
        return 1;
    }


	freeaddrinfo(result);
	system("Pause");
	return 0;
}


