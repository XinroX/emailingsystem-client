#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include "clientservice.h"

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = nullptr);
    
    void Login(const QString& login, const QString& password);
    
signals:
    
public slots:
    void readyRead();
    void disconnected();
    
private:
    QTcpSocket socket;
    
};

#endif // CLIENT_H
