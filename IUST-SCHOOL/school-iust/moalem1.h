#ifndef MOALEM1_H
#define MOALEM1_H

#include <QWidget>
#include "nazem3.h"
namespace Ui {
class Moalem1;
}

class Moalem1 : public QWidget
{
    Q_OBJECT
    
public:
    explicit Moalem1(QWidget *parent = 0);
    ~Moalem1();
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Moalem1 *ui;
};

#endif // MOALEM1_H
