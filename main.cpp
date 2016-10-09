#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    mainWindow window;
    window.show();

    return application.exec();
}
