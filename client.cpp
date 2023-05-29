#include "client.h"

Client::Client(QObject *parent)
    : QObject{parent}
{
    
}


void Client::Login(const QString &login, const QString &password) {
    if (socket.isOpen()) socket.close();
    ClientService cs;
    QByteArray data = cs.PrepareLoginRequest(login, password);
    connect(&socket, &QTcpSocket::readyRead, this, &Client::readyRead);
    connect(&socket, &QTcpSocket::disconnected, this, &Client::disconnected);
    socket.connectToHost("192.168.1.37", 3333);
    if (!socket.waitForConnected(3000)) return;
    socket.write(data);
}

void Client::disconnected() {
    socket.close();
}

void Client::readyRead() {
    
}