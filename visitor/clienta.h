#ifndef CLIENTA_H
#define CLIENTA_H

#include <QObject>
#include "clientbase.h"

class ClientA : public ClientBase
{
public:
    ClientA(QObject *parent = nullptr);

    void Visite(const VisitorBase &visitor) override;

private:
    int id_ {0};
    QString name_ {""};
};

#endif // CLIENTA_H
