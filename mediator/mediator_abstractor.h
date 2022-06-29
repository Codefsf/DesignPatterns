#ifndef MEDIATORABSTRACTOR_H
#define MEDIATORABSTRACTOR_H

#include <QString>

class MediatorAbstract
{
public:
    MediatorAbstract() = default;
    virtual ~MediatorAbstract() = default;

    virtual void SetLineEditContent(const QString& content) = 0;
    virtual QString GetLineEditContent() = 0;

    virtual void SetCheckIndex(int index) = 0;
    virtual int GetCheckIndex() = 0;
};






#endif // MEDIATORABSTRACTOR_H
