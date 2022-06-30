#ifndef CLIENTB_H
#define CLIENTB_H

#include <QObject>
#include "clientbase.h"

class ClientB : public ClientBase
{
    Q_OBJECT
public:
    explicit ClientB(QObject *parent = nullptr);

    void Visite(const VisitorBase &visitor) override;

private:
    int id_ {0};
    QString name_ {""};
};

#endif // CLIENTB_H
