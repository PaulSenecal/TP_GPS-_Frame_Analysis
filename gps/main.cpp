/*
 Version:1.1
 Goal:Extract and treat data and save in db
 Date:12/11/21
 by:Paul_SNL
*/
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
