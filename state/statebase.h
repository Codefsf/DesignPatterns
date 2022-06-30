#ifndef STATEBASE_H
#define STATEBASE_H

#include <QObject>
#include <memory>

class Context;
class StateBase : public QObject
{
    Q_OBJECT
public:
    explicit StateBase(QObject *parent = nullptr);

    virtual void Handle(const std::shared_ptr<Context>& ctx) = 0;
};

#endif // STATEBASE_H
