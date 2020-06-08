#ifndef GAME_H
#define GAME_H
#include "player.h"
#include <QPushButton>
#include <QString>
#include <QLabel>

class Game
{
private:
  Player players[2];
  int turn = 0;
public:
  QString fields[9];
  int getTurn();
  void switchTurn(QLabel *label);
  Player getPlayer(int playerNumber);
  bool isRowWon();
  bool isColWon();
  bool isDiagonalWon();
  bool isGameWon();
  void executeTurn(QPushButton *button, QLabel *label, int field);
  void play();
  Game();
};

#endif // GAME_H
