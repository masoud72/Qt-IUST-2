#ifndef NAZEM2_H
#define NAZEM2_H

#include "nazem1.h"
#include <QWidget>
#include <QTableWidget>

namespace Ui {
class Nazem2;
}

class Nazem2 : public QWidget
{
    Q_OBJECT
    
public:
    explicit Nazem2(QWidget *parent = 0);
    ~Nazem2();

    
private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Nazem2 *ui;
};

#endif // NAZEM2_H
