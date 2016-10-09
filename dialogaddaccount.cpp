#include "dialogaddaccount.h"
#include "ui_dialogaddaccount.h"

dialogAddAccount::dialogAddAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogAddAccount)
{
    ui->setupUi(this);
}

dialogAddAccount::~dialogAddAccount()
{
    delete ui;
}

void dialogAddAccount::setHouse(house *pHouse)
{
    tmpHouse = pHouse;
}


void dialogAddAccount::on_pb_AcceptAccount_clicked()
{
    /// Check if there is a house for the account.
    if(tmpHouse == NULL){
        qFatal("No house available for saving the account. First use function setHouse() to set the house for the account!");
    }

    /// Create temporary account object.
    tmpAccount = new account();

    /// Read account information out of GUI and put it in the temporary object.
    tmpAccount->setName(ui->le_Name->text());
    tmpAccount->setSaldo(ui->le_Saldo->text().toFloat());
//    qDebug() << "Name:" << tmpAccount->getName() << "\tSaldo:" << tmpAccount->getSaldo();

    /// Write temporary account in house vector "accounts".
    tmpHouse->addAccount(tmpAccount);

    /// Close add account dialog.
    this->close();
}

