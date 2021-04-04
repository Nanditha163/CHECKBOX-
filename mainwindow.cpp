#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>

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


void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
    {
        stream<<"Bold is Checked\n";
    }
    ui->label->setText("<font color='Red'>Change Me!</font>");
}

void MainWindow::on_checkbox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkbox_2->isChecked())
    {
        stream<<"Italic is Checked\n";
    }
    ui->label->setText("<font color='green'>Change Me!</font>");
}

void MainWindow::on_radiobutton_1_clicked()
{
    QTextStream stream(stdout);
    if(ui->radiobutton_1->isChecked())
    {
        stream<<"left is Checked\n";
    }
    ui->label->setText("<font color='orange'>Change Me!</font>");
}

void MainWindow::on_radiobutton_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->radiobutton_2->isChecked())
    {
        stream<<"right is Checked\n";
    }
    ui->label->setText("<font color='pink'>Change Me!</font>");
}

void MainWindow::on_radiobutton_3_clicked()
{
    QTextStream stream(stdout);
    if(ui->radiobutton_3->isChecked())
    {
        stream<<"center is Checked\n";
    }
    ui->label->setText("<font color='maroon'>Change Me!</font>");
}
