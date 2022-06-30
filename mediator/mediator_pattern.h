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

private slots:
    void on_lineEdit_editingFinished();

    void on_pushButton_clicked();

    void on_checkBox_clicked(bool checked);

    void on_checkBox_2_clicked(bool checked);

    void on_checkBox_3_clicked(bool checked);

private:
    Ui::MediatorPattern *ui;
};

#endif // MEDIATORPATTERN_H
