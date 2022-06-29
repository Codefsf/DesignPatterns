#ifndef MEDIATORIMPL_H
#define MEDIATORIMPL_H

#include <QObject>

#include "mediator_abstractor.h"

class MediatorImpl : public MediatorAbstract
{
public:
    MediatorImpl();

    void SetLineEditContent(const QString& content) override;
    QString GetLineEditContent() override;

    void SetCheckIndex(int index) override;
    int GetCheckIndex() override;
};

#endif // MEDIATORIMPL_H
