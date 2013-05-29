#ifndef NAZEM3_H
#define NAZEM3_H

#include <QWidget>
#include "nazem1.h"
#include "moalem1.h"

namespace Ui {
class Nazem3;
}

class Nazem3 : public QWidget
{
    Q_OBJECT
    
public:
    explicit Nazem3(QWidget *parent = 0);
    ~Nazem3();
    
private slots:
    void on_pushButton_3_clicked();

private:
    Ui::Nazem3 *ui;
};

#endif // NAZEM3_H
