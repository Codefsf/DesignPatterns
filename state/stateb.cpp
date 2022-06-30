#include "statea.h"
#include "stateb.h"
#include "context.h"
#include <QDebug>

StateB::StateB(QObject *parent) : StateBase(parent)
{

}

void StateB::Handle(const std::shared_ptr<Context>& ctx)
{
    qDebug() << "State_B handle";

    auto statea = std::make_shared<StateA>();
    ctx->SetState(statea);
}
