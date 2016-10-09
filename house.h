#ifndef HOUSE_H
#define HOUSE_H

#include "account.h"
#include <QDebug>
#include <QVector>

class house
{
public:
    house();
    void addAccount(account *pAccount);
    unsigned int getNrAccounts() const;

private:
    QVector<account> accounts;
    unsigned int nrAccounts;
};

#endif // HOUSE_H
