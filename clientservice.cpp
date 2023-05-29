#include "clientservice.h"
#include <QDebug>

ClientService::ClientService(QObject *parent)
    : QObject{parent}
{
    
}

QByteArray ClientService::PrepareLoginRequest(const QString& login, const QString& password) {
    QVariantMap headerMap;
    headerMap["code"] = QString::number(static_cast<int>(MessageCode::LOGIN_REQUEST));
    QVariantMap bodyMap;
    bodyMap["login"] = login;
    bodyMap["password"] = password;
    QVariantMap map;
    map["header"] = headerMap;
    map["body"] = bodyMap;
    QJsonDocument document = QJsonDocument::fromVariant(map);
    return document.toJson();
}

QByteArray ClientService::PrepareMessagesReceivedRequest(const QString &login) {
    QVariantMap headerMap;
    headerMap["code"] = QString::number(static_cast<int>(MessageCode::GET_MESSAGES_RECEIVED));
    QVariantMap bodyMap;
    bodyMap["login"] = login;
    QVariantMap map;
    map["header"] = headerMap;
    map["body"] = bodyMap;
    QJsonDocument doc = QJsonDocument::fromVariant(map);
    return doc.toJson();
}

QByteArray ClientService::PrepareMessagesSentRequest(const QString &login) {
    QVariantMap headerMap;
    headerMap["code"] = QString::number(static_cast<int>(MessageCode::GET_MESSAGES_RECEIVED));
    QVariantMap bodyMap;
    bodyMap["login"] = login;
    QVariantMap map;
    map["header"] = headerMap;
    map["body"] = bodyMap;
    QJsonDocument doc = QJsonDocument::fromVariant(map);
    return doc.toJson();
}


void ClientService::StartHandling(const QByteArray &data) {
    QJsonDocument doc = QJsonDocument::fromJson(data);
    qInfo() << doc;
}