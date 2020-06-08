#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "game.h"

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

  Game game;

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private slots:
  void on_field1_clicked();

  void on_field2_clicked();

  void on_field3_clicked();

  void on_field4_clicked();

  void on_field5_clicked();

  void on_field6_clicked();

  void on_field7_clicked();

  void on_field8_clicked();

  void on_field9_clicked();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
