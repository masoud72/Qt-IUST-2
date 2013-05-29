#include "nazem3.h"
#include "ui_nazem3.h"

Nazem3::Nazem3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nazem3)
{
    ui->setupUi(this);
}

Nazem3::~Nazem3()
{
    delete ui;
}

void Nazem3::on_pushButton_3_clicked()
{
//if nazem boud in ejra shavad
//    Nazem1 *na1;
//    na1 = new Nazem1;
//    na1->show();
//    this->close();


// if moalem boud in ejra shavad
    Moalem1 *mo;
    mo = new Moalem1;
    mo->show();
    this->close();

}
