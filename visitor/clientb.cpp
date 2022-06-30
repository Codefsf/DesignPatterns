#include "clientb.h"
#include <QDebug>

ClientB::ClientB(QObject *parent)
    : ClientBase(parent)
{

}

void ClientB::Visite(const VisitorBase &visitor)
{
    qDebug() << Q_FUNC_INFO;
}
