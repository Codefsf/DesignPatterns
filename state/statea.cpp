#include "statea.h"
#include "stateb.h"
#include "context.h"

#include <QDebug>

StateA::StateA(QObject *parent) : StateBase(parent)
{

}

void StateA::Handle(const std::shared_ptr<Context>& ctx)
{
    qDebug() << "State_A handle";

    auto stateb = std::make_shared<StateB>();
    ctx->SetState(stateb);
}
