#ifndef DIALOGADDACCOUNT_H
#define DIALOGADDACCOUNT_H

#include "account.h"
#include "house.h"
#include <QDebug>
#include <QDialog>

namespace Ui {
class dialogAddAccount;
}

class dialogAddAccount : public QDialog
{
    Q_OBJECT

public:
    explicit dialogAddAccount(QWidget *parent = 0);
    ~dialogAddAccount();
    void setHouse(house *pHouse);

private slots:
    void on_pb_AcceptAccount_clicked();

private:
    Ui::dialogAddAccount *ui;
    account *tmpAccount;
    house *tmpHouse;
};

#endif // DIALOGADDACCOUNT_H
