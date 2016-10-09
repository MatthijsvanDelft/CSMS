#include "house.h"

house::house() : nrAccounts(0)
{

}

void house::addAccount(account *pAccount)
{
#warning Add check.
    /// Add account to house.
    accounts.push_back(*pAccount);
    nrAccounts++;
    qDebug() << "Name:" << accounts.last().getName() << "\tSaldo:" << accounts.last().getSaldo();
}

unsigned int house::getNrAccounts() const
{
    return nrAccounts;
}

