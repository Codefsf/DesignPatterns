#ifndef MEDIATORPATTERN_H
#define MEDIATORPATTERN_H

#include <QWidget>

namespace Ui {
class MediatorPattern;
}

class MediatorPattern : public QWidget
{
    Q_OBJECT

public:
    explicit MediatorPattern(QWidget *parent = nullptr);
    ~MediatorPattern();

private:
    Ui::MediatorPattern *ui;
};

#endif // MEDIATORPATTERN_H
