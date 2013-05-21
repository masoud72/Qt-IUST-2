#include "school.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    School w;
    w.show();
    
    return a.exec();
}
