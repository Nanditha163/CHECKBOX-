#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QmessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton_1->isChecked())
    {
        QMessageBox::information(0,"AGE","AGE IS BELOW 18");
    }
    if(ui->radioButton_2->isChecked())
    {
         QMessageBox::information(0,"AGE","AGE IS ABOVE 18");
    }

}


void MainWindow::on_pushButton_2_clicked()
{
    if(ui->checkBox_1->isChecked())
    {
        QMessageBox::information(0,"LIKES","SLEEPING");
    }
    if(ui->checkBox_2->isChecked())
    {
        QMessageBox::information(0,"LIKES","PLAYING");
    }
    if(ui->checkBox_3->isChecked())
    {
        QMessageBox::information(0,"LIKES","EATING");
    }

}
