#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // a.setStyle("fusion");
    MainWindow w;
    w.show();

    return a.exec();
}
