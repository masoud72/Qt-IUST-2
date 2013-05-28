#ifndef NAZEM1_H
#define NAZEM1_H

#include <QWidget>
#include "nazem2.h"

namespace Ui {
class Nazem1;
}

class Nazem1 : public QWidget
{
    Q_OBJECT
    
public:
    explicit Nazem1(QWidget *parent = 0);
    ~Nazem1();
    
private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Nazem1 *ui;
};

#endif // NAZEM1_H
