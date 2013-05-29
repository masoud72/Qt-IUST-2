#include "moalem1.h"
#include "ui_moalem1.h"

Moalem1::Moalem1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Moalem1)
{
    ui->setupUi(this);
}

Moalem1::~Moalem1()
{
    delete ui;
}

void Moalem1::on_pushButton_2_clicked()
{
    exit(1);
}

void Moalem1::on_pushButton_clicked()
{
    Nazem3 *na3;
    na3 = new Nazem3;
    na3->show();
    this->close();

}
