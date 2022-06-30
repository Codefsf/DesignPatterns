#include "context.h"
#include "statebase.h"
#include <QDebug>

Context::Context()
{

}

void Context::SetState(const std::shared_ptr<StateBase> &state)
{
    if(!state)
    {
        return;
    }

    state_ = state;
}

void Context::Handle()
{
    if(state_)
    {
       state_->Handle(shared_from_this());
    }
}
