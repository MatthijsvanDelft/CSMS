#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QString>

class account
{
public:
    account();

    QString getName() const;
    void setName(const QString &value);
    float getSaldo() const;
    void setSaldo(float value);

private:
    QString name;
    float saldo;

protected:

};

#endif // ACCOUNT_H
