#include <QApplication>
#include <QTimer>

#include "state/context.h"
#include "state/statea.h"
#include "state/stateb.h"

#include <memory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    auto ctx    = std::make_shared<Context>();
    auto statea = std::make_shared<StateA>();
    ctx->SetState(statea);

    auto timer = new QTimer;
    QObject::connect(timer, &QTimer::timeout, [&](){
        ctx->Handle();
    });

    timer->start(2000);

    return a.exec();
}
