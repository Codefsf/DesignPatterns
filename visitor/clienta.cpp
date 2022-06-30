#include "clienta.h"
#include <QDebug>

ClientA::ClientA(QObject *parent)
    : ClientBase(parent)
{

}

void ClientA::Visite(const VisitorBase &visitor)
{
    qDebug() << Q_FUNC_INFO;
}
