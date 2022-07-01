#include "cnter.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cnter w;
    w.show();
    return a.exec();
}
