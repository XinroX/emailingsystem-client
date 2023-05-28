#ifndef CLIENTSERVICE_H
#define CLIENTSERVICE_H

#include <QObject>


enum class MessageCode {
    LOGIN_REQUEST = 0,
    LOGIN_REJECT = 11,
    LOGIN_ACCEPT = 12,
    LOGIN_ERROR = 13,
    GET_MESSAGES_RECEIVED = 21,
    GET_MESSAGES_SENT = 22,
    NO_MESSAGE_FOUND = 31,
    MESSAGES_FOUND = 32
};


class ClientService : public QObject
{
    Q_OBJECT
public:
    explicit ClientService(QObject *parent = nullptr);
    
    
signals:
    
};

#endif // CLIENTSERVICE_H
