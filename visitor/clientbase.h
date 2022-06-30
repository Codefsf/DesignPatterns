#ifndef CLIENTBASE_H
#define CLIENTBASE_H

#include <QObject>

class VisitorBase;
class ClientBase : public QObject
{
    Q_OBJECT
public:
    explicit ClientBase(QObject *parent = nullptr);

    virtual void Visite(const VisitorBase& visitor) = 0;
};

#endif // CLIENTBASE_H
