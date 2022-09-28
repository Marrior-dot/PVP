#ifndef PVP_H
#define PVP_H
#include <string>

using std::string;

class Pvp{

public:

  Pvp(string, int, int);
  Pvp(const Pvp &);

  void setCharacterName(const string);
  void setAttack(int);
  void setStamAttack(int);
  void setLife(int [], int);
  void setStam(int [], int);
  void realAttack(int, int);

  string getCharacterName();
  int getAttack();
  int getLife();
  int getStamina();

private:
  string character_name;
  int attack;
  int stamTaken;
  int cLife[20];
  int cStamina[10];

  static const int life[20];
  static const int stamina[10];
};


#endif
