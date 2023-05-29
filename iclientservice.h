#ifndef ICLIENTSERVICE_H
#define ICLIENTSERVICE_H

#include <QObject>

class IClientService : public QObject
{
    Q_OBJECT
public:
    explicit IClientService(QObject *parent = nullptr);
    
    //virtual QByteArray PrepareLoginRequest(const QString& login, const QString& password);
    
signals:
    
};

#endif // ICLIENTSERVICE_H
