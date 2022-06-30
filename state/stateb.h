#ifndef STATEB_H
#define STATEB_H

#include <QObject>
#include "statebase.h"

class StateB : public StateBase
{
    Q_OBJECT
public:
    explicit StateB(QObject *parent = nullptr);

    void Handle(const std::shared_ptr<Context>& ctx) override;
};

#endif // STATEB_H
