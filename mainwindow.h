#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "dialogaddaccount.h"
#include "house.h"

namespace Ui {
class mainWindow;
}

class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainWindow(QWidget *parent = 0);
    ~mainWindow();

private slots:
    void on_pb_AddAccount_clicked();

private:
    Ui::mainWindow *ui;
    dialogAddAccount *addAccountWindow;
    house cribSoleil;

    void updateTableWidgetAccounts();
};

#endif // MAINWINDOW_H
