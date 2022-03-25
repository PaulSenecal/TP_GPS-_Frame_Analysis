/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *trame;
    QLabel *label;
    QLabel *title;
    QLabel *longitudeTitle;
    QLabel *latitudeTitle;
    QLineEdit *longitudeLineEdit;
    QLineEdit *latitudeLineEdit;
    QLineEdit *altitudeLineEdit;
    QLineEdit *nbSatelitesLineEdit;
    QLabel *altitudeTitle;
    QLabel *nbSateliteTitle;
    QPushButton *extracButton;
    QPushButton *saveButton;
    QPushButton *openFileButton;
    QTextEdit *trameTextEdit;
    QRadioButton *ggaRadioButton;
    QRadioButton *gsaRadioButton;
    QRadioButton *gsvRadioButton;
    QRadioButton *rmcRadioButton;
    QRadioButton *vtgRadioButton;
    QRadioButton *allRadioButton;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuGPS;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 612);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        trame = new QLineEdit(centralwidget);
        trame->setObjectName(QString::fromUtf8("trame"));
        trame->setGeometry(QRect(162, 99, 621, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 100, 141, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        title = new QLabel(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(250, -20, 391, 101));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        title->setFont(font1);
        longitudeTitle = new QLabel(centralwidget);
        longitudeTitle->setObjectName(QString::fromUtf8("longitudeTitle"));
        longitudeTitle->setGeometry(QRect(20, 190, 141, 31));
        longitudeTitle->setFont(font);
        latitudeTitle = new QLabel(centralwidget);
        latitudeTitle->setObjectName(QString::fromUtf8("latitudeTitle"));
        latitudeTitle->setGeometry(QRect(30, 230, 141, 31));
        latitudeTitle->setFont(font);
        longitudeLineEdit = new QLineEdit(centralwidget);
        longitudeLineEdit->setObjectName(QString::fromUtf8("longitudeLineEdit"));
        longitudeLineEdit->setGeometry(QRect(130, 190, 201, 31));
        longitudeLineEdit->setReadOnly(true);
        latitudeLineEdit = new QLineEdit(centralwidget);
        latitudeLineEdit->setObjectName(QString::fromUtf8("latitudeLineEdit"));
        latitudeLineEdit->setGeometry(QRect(130, 230, 201, 31));
        latitudeLineEdit->setReadOnly(true);
        altitudeLineEdit = new QLineEdit(centralwidget);
        altitudeLineEdit->setObjectName(QString::fromUtf8("altitudeLineEdit"));
        altitudeLineEdit->setGeometry(QRect(520, 190, 211, 31));
        altitudeLineEdit->setReadOnly(true);
        nbSatelitesLineEdit = new QLineEdit(centralwidget);
        nbSatelitesLineEdit->setObjectName(QString::fromUtf8("nbSatelitesLineEdit"));
        nbSatelitesLineEdit->setGeometry(QRect(520, 230, 211, 31));
        nbSatelitesLineEdit->setReadOnly(true);
        altitudeTitle = new QLabel(centralwidget);
        altitudeTitle->setObjectName(QString::fromUtf8("altitudeTitle"));
        altitudeTitle->setGeometry(QRect(430, 190, 91, 31));
        altitudeTitle->setFont(font);
        nbSateliteTitle = new QLabel(centralwidget);
        nbSateliteTitle->setObjectName(QString::fromUtf8("nbSateliteTitle"));
        nbSateliteTitle->setGeometry(QRect(390, 230, 131, 31));
        nbSateliteTitle->setFont(font);
        extracButton = new QPushButton(centralwidget);
        extracButton->setObjectName(QString::fromUtf8("extracButton"));
        extracButton->setGeometry(QRect(0, 140, 251, 25));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        extracButton->setFont(font2);
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(330, 500, 161, 51));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        saveButton->setFont(font3);
        openFileButton = new QPushButton(centralwidget);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));
        openFileButton->setGeometry(QRect(10, 60, 191, 31));
        openFileButton->setFont(font2);
        trameTextEdit = new QTextEdit(centralwidget);
        trameTextEdit->setObjectName(QString::fromUtf8("trameTextEdit"));
        trameTextEdit->setGeometry(QRect(130, 270, 601, 171));
        trameTextEdit->setReadOnly(true);
        ggaRadioButton = new QRadioButton(centralwidget);
        ggaRadioButton->setObjectName(QString::fromUtf8("ggaRadioButton"));
        ggaRadioButton->setGeometry(QRect(220, 450, 71, 22));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        ggaRadioButton->setFont(font4);
        gsaRadioButton = new QRadioButton(centralwidget);
        gsaRadioButton->setObjectName(QString::fromUtf8("gsaRadioButton"));
        gsaRadioButton->setGeometry(QRect(320, 450, 61, 22));
        gsaRadioButton->setFont(font4);
        gsvRadioButton = new QRadioButton(centralwidget);
        gsvRadioButton->setObjectName(QString::fromUtf8("gsvRadioButton"));
        gsvRadioButton->setGeometry(QRect(490, 450, 61, 22));
        gsvRadioButton->setFont(font4);
        rmcRadioButton = new QRadioButton(centralwidget);
        rmcRadioButton->setObjectName(QString::fromUtf8("rmcRadioButton"));
        rmcRadioButton->setGeometry(QRect(570, 450, 61, 22));
        rmcRadioButton->setFont(font4);
        vtgRadioButton = new QRadioButton(centralwidget);
        vtgRadioButton->setObjectName(QString::fromUtf8("vtgRadioButton"));
        vtgRadioButton->setGeometry(QRect(660, 450, 61, 22));
        vtgRadioButton->setFont(font4);
        allRadioButton = new QRadioButton(centralwidget);
        allRadioButton->setObjectName(QString::fromUtf8("allRadioButton"));
        allRadioButton->setGeometry(QRect(130, 450, 61, 22));
        allRadioButton->setFont(font4);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(530, 500, 261, 51));
        pushButton->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuGPS = new QMenu(menubar);
        menuGPS->setObjectName(QString::fromUtf8("menuGPS"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGPS->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TRAME BRUTE :", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "ANALYSE TRAME GPS", nullptr));
        longitudeTitle->setText(QCoreApplication::translate("MainWindow", "Longitude :", nullptr));
        latitudeTitle->setText(QCoreApplication::translate("MainWindow", "Latitude :", nullptr));
        longitudeLineEdit->setText(QCoreApplication::translate("MainWindow", "Click sur le BOUTON!!!!!!! ", nullptr));
        latitudeLineEdit->setText(QString());
        altitudeTitle->setText(QCoreApplication::translate("MainWindow", "Altitude :", nullptr));
        nbSateliteTitle->setText(QCoreApplication::translate("MainWindow", "Nb Satellites :", nullptr));
        extracButton->setText(QCoreApplication::translate("MainWindow", "EXTRAC DATA", nullptr));
#if QT_CONFIG(shortcut)
        extracButton->setShortcut(QCoreApplication::translate("MainWindow", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        saveButton->setText(QCoreApplication::translate("MainWindow", "SAUVEGARDE", nullptr));
#if QT_CONFIG(shortcut)
        saveButton->setShortcut(QCoreApplication::translate("MainWindow", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        openFileButton->setText(QCoreApplication::translate("MainWindow", "OUVRIR FICHIER", nullptr));
        trameTextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        ggaRadioButton->setText(QCoreApplication::translate("MainWindow", "GGA", nullptr));
        gsaRadioButton->setText(QCoreApplication::translate("MainWindow", "GSA", nullptr));
        gsvRadioButton->setText(QCoreApplication::translate("MainWindow", "GSV", nullptr));
        rmcRadioButton->setText(QCoreApplication::translate("MainWindow", "RMC", nullptr));
        vtgRadioButton->setText(QCoreApplication::translate("MainWindow", "VTG", nullptr));
        allRadioButton->setText(QCoreApplication::translate("MainWindow", "ALL", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "ENVOYE TA TRAME AU 3615", nullptr));
        menuGPS->setTitle(QCoreApplication::translate("MainWindow", "GPS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
