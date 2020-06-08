#include "game.h"

int Game::getTurn()
{ return this->turn; }

void Game::switchTurn(QLabel *label)
{
  this->turn ^= 1;
  label->setText("Spieler " +QString::number(this->getTurn()+1));
}

Player Game::getPlayer(int playerNumber)
{ return this->players[playerNumber]; }

bool Game::isRowWon()
{
  if (fields[0] != "" && fields[0] == fields[1]&& fields[1]==fields[2])
    return true;
  else if (fields[3] != "" && fields[3] == fields[4]&& fields[4]==fields[5])
    return true;
  else if (fields[6] != "" && fields[6] == fields[7]&& fields[7]==fields[8])
    return true;
  else return false;
}

bool Game::isColWon()
{
  if (fields[0] != "" && fields[0] == fields[3]&& fields[3]==fields[6])
    return true;
  else if (fields[1] != "" && fields[1] == fields[4]&& fields[4]==fields[7])
    return true;
  else if (fields[2] != "" && fields[2] == fields[5]&& fields[5]==fields[8])
    return true;
  else return false;
}

bool Game::isDiagonalWon()
{
  if (fields[0] != "" && fields[0] == fields[4]&& fields[4]==fields[8])
    return true;
  else if (fields[2] != "" && fields[2] == fields[4]&& fields[4]==fields[6])
    return true;
  else return false;
}

bool Game::isGameWon()
{
  if (this->isRowWon())
    return true;
  else if (this->isColWon())
    return true;
  else if (this->isDiagonalWon())
    return true;
  else return false;
}

void Game::executeTurn(QPushButton *button, QLabel *label,int field)
{
  if (button->text() == "")
    {
      int turnNumb = this->getTurn();
      QString symbol = this->getPlayer(turnNumb).getSymbol();
      button->setText(symbol);
      fields[field] = symbol;
      if (this->isGameWon())
        NULL; //TODO: Gewinnabfrage vollenden
      this->switchTurn(label);
    }
}

void Game::play()
{
  players[0].setSymbol("X");
  players[1].setSymbol("O");
  for (int i = 0; i<9; i++)
    this->fields[i] = "";
}

Game::Game()
{
  this->play();
}
