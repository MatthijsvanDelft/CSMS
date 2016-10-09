#include "mainwindow.h"
#include "ui_mainwindow.h"

mainWindow::mainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainWindow)
{
    ui->setupUi(this);
}

mainWindow::~mainWindow()
{
    delete ui;
}

void mainWindow::on_pb_AddAccount_clicked()
{
    addAccountWindow = new dialogAddAccount();
    addAccountWindow->setHouse(&cribSoleil);
    addAccountWindow->show();
}

void mainWindow::updateTableWidgetAccounts()
{
//    if (ui->tw_Accounts->rowCount() != cribSoleil.getNrAccounts()){
//        ///
//        ui->tw_Accounts->clear();

//        ui->tw_Accounts->insertColumn(1);
//        for (int i=0; i<cribSoleil.getNrAccounts(); i++){
//            ui->tw_Accounts->insertRow(i);
////            ui->tw_Accounts->setItem(i, 0, QTableWidgetItem);

//        }
//        ///

//    }
    #warning Ended here.
}
