#include "mainwindow.h"
#include "game.h"
#include "player.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  return a.exec();
}
