#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setCursor(Qt::CrossCursor);
    ui->setupUi(this);
    readTrame();
    header();
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::readTrame(void)
{
     QString fileName = "C:\\Programmation\\SNIR2\\GUI\\GPS\\trame1.txt";
     QFile file(fileName);
     file.open(QIODevice::ReadOnly | QIODevice::Text);
     QTextStream flux(&file);
     QString tout = flux.readLine(84);
     ui->trame->insert(tout);
     file.close();
    return 0;
}

void MainWindow::on_extracButton_clicked()
{
    QString mot =ui->trame->text();
    QStringList list = mot.split(",");
    ui->longitudeLineEdit->setText(list.at(4)+ "" +list.at(5));
    ui->latitudeLineEdit->setText(list.at(2)+ "" +list.at(3));
    ui->altitudeLineEdit->setText(list.at(9));
    ui->nbSatelitesLineEdit->setText(list.at(7));
}

void MainWindow::on_saveButton_clicked()
{
    QString dataTrame = "C:\\Programmation\\SNIR2\\GUI\\GPS\\DataTrame.csv";
    QFile file(dataTrame);
    if (!file.open(QIODevice::Append/*WriteOnly*/ | QIODevice::Text))
        return;
    QTextStream dataflux(&file);
    dataflux <<ui->longitudeLineEdit->text()     +";"
             <<ui->latitudeLineEdit->text()     +";"
             <<ui->altitudeLineEdit->text()    +";"
             <<ui->nbSatelitesLineEdit->text()+";\r";
}

void MainWindow::header(void)
{
    QString dataTrame = "C:\\Programmation\\SNIR2\\GUI\\GPS\\DataTrame.csv";
    QFile file(dataTrame);
    if (!file.open(QIODevice::Append | QIODevice::Text))
        return;
    QTextStream dataflux(&file);
     dataflux << "LONGITUDE;LATITUDE;ALTITUDE;NB_SATELLITE\r";
}

void MainWindow::on_openFileButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "C:\\Programmation\\SNIR2\\GUI\\GPS\\",
                                                    tr("*.txt"));
    QFile file(fileName);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream flux(&file);
    QString tout = flux.readAll();
    list = tout.split("\n");

    ui->trameTextEdit->setText(tout);
    file.close();
}

void MainWindow::gpsEditTrameTextEdit(QString wordFind)
{
    //compte les ligne 67
    long nombreDeLignes = list.size();
    std::cout <<nombreDeLignes;
    ui->trameTextEdit->clear();
    for (int i =0; i<nombreDeLignes ; i++ )
    {
        QString texte = list.at(i);
        if(texte.contains(wordFind,Qt::CaseInsensitive))
        {
            ui->trameTextEdit->insertPlainText(texte + "\n");
        }
    }
}

void MainWindow::on_allRadioButton_clicked()
{
    gpsEditTrameTextEdit("");
}
void MainWindow::on_ggaRadioButton_clicked()
{
    gpsEditTrameTextEdit("GGA");
}
void MainWindow::on_gsaRadioButton_clicked()
{
    gpsEditTrameTextEdit("GSA");
}

void MainWindow::on_gsvRadioButton_clicked()
{
    gpsEditTrameTextEdit("GSV");
}

void MainWindow::on_rmcRadioButton_clicked()
{
    gpsEditTrameTextEdit("RMC");
}

void MainWindow::on_vtgRadioButton_clicked()
{
    gpsEditTrameTextEdit("VTG");
}
//not available currently
void MainWindow::on_pushButton_clicked()
{
       QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
       db.setHostName("localhost");
       db.setDatabaseName("gps");
       db.setUserName("root");
       db.setPassword("");
       bool ok = db.open();

}
