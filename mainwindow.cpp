#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

void MainWindow::on_field1_clicked()
{ game.executeTurn(ui->field1,ui->playerView,0); }

void MainWindow::on_field2_clicked()
{ game.executeTurn(ui->field2,ui->playerView,1); }

void MainWindow::on_field3_clicked()
{ game.executeTurn(ui->field3,ui->playerView,2); }

void MainWindow::on_field4_clicked()
{ game.executeTurn(ui->field4,ui->playerView,3); }

void MainWindow::on_field5_clicked()
{ game.executeTurn(ui->field5,ui->playerView,4); }

void MainWindow::on_field6_clicked()
{ game.executeTurn(ui->field6,ui->playerView,5); }

void MainWindow::on_field7_clicked()
{ game.executeTurn(ui->field7,ui->playerView,6); }

void MainWindow::on_field8_clicked()
{ game.executeTurn(ui->field8,ui->playerView,7); }

void MainWindow::on_field9_clicked()
{ game.executeTurn(ui->field9,ui->playerView,8); }

MainWindow::~MainWindow()
{
  delete ui;
}
