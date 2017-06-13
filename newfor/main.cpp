#include "qcount.h"
#include <QApplication>
#include"Count_two.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qcount w;
    w.show();

    return a.exec();
}
