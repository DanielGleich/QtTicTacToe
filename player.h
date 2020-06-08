#ifndef PLAYER_H
#define PLAYER_H

#include <QString>

class Player
{
private:
  QString symbol;
public:
  QString getSymbol();
  void setSymbol(QString temp);
  Player();
};

#endif // PLAYER_H
