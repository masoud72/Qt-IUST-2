#include "nazem1.h"
#include "ui_nazem1.h"
#include "nazem2.h"
#include "nazem3.h"

Nazem1::Nazem1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nazem1)
{
    ui->setupUi(this);
}

Nazem1::~Nazem1()
{
    delete ui;
}

void Nazem1::on_pushButton_3_clicked()
{
    exit(1);
}

void Nazem1::on_pushButton_2_clicked()
{
    Nazem2 *na2;
    na2 = new Nazem2;
    na2->show();
    this->close();
}

void Nazem1::on_pushButton_clicked()
{
    Nazem3 *na3;
    na3 = new Nazem3;
    na3->show();
    this->close();

}
