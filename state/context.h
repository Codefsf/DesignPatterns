#ifndef CONTEXT_H
#define CONTEXT_H

#include <QObject>
#include <memory>

class StateBase;
class Context : public std::enable_shared_from_this<Context>
{
public:
    explicit Context();

    void SetState(const std::shared_ptr<StateBase>& state);

    void Handle();

private:
    std::shared_ptr<StateBase> state_ {nullptr};
};

#endif // CONTEXT_H
