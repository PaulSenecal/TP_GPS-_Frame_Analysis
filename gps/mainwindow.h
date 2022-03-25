#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextStream>
#include <QFileDialog>
#include <QFile>
#include <QString>
#include <iostream>
#include <QtDebug>
#include <QtSql/QSqlDatabase>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int readTrame(void);
    void header(void);
    void gpsEditTrameTextEdit(QString);
private slots:
    void on_extracButton_clicked();

    void on_saveButton_clicked();

    void on_openFileButton_clicked();

    void on_ggaRadioButton_clicked();

    void on_allRadioButton_clicked();

    void on_gsaRadioButton_clicked();

    void on_gsvRadioButton_clicked();

    void on_rmcRadioButton_clicked();

    void on_vtgRadioButton_clicked();

    void on_pushButton_clicked();

private:
    QStringList list;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
