#include "pvp.h"
#include "pvp.cpp"
#include <string>
#include <iostream>

using std::cout;
using std::string;

int main() {
  Pvp Player1("", 0, 0);
  Player1.setCharacterName("Player 1");
  Player1.setAttack(4);
  Player1.setStamAttack(5);

  Pvp Player2(Player1);
  Player2.setCharacterName("Player 2");
  Player2.setAttack(5);
  Player2.setStamAttack(3);

  cout << "Funcionou";
}