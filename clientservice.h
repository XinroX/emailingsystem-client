#ifndef CLIENTSERVICE_H
#define CLIENTSERVICE_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>


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
    
    QByteArray PrepareLoginRequest(const QString& login, const QString& password);
    
    QByteArray PrepareMessagesReceivedRequest(const QString& login);
    
    QByteArray PrepareMessagesSentRequest(const QString& login);
    
    void StartHandling(const QByteArray& data);
    
signals:
    
};

#endif // CLIENTSERVICE_H
