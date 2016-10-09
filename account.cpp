#include "account.h"

account::account() : name("Unknown"), saldo(0.0)
{

}

QString account::getName() const
{
    return name;
}

void account::setName(const QString &value)
{
    name = value;
}

float account::getSaldo() const
{
    return saldo;
}

void account::setSaldo(float value)
{
    saldo = value;
}

