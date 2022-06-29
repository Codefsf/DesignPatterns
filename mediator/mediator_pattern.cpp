#include "mediator_pattern.h"
#include "ui_mediator_pattern.h"

MediatorPattern::MediatorPattern(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MediatorPattern)
{
    ui->setupUi(this);
}

MediatorPattern::~MediatorPattern()
{
    delete ui;
}

void MediatorPattern::on_lineEdit_editingFinished()
{

}

void MediatorPattern::on_pushButton_clicked()
{

}


void MediatorPattern::on_checkBox_clicked(bool checked)
{

}

void MediatorPattern::on_checkBox_2_clicked(bool checked)
{

}

void MediatorPattern::on_checkBox_3_clicked(bool checked)
{

}
