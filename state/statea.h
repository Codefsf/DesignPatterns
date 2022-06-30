#ifndef STATEA_H
#define STATEA_H

#include <QObject>
#include "statebase.h"

class StateA : public StateBase
{
    Q_OBJECT
public:
    explicit StateA(QObject *parent = nullptr);

    void Handle(const std::shared_ptr<Context>& ctx) override;
};

#endif // STATEA_H
