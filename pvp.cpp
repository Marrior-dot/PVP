#include "pvp.h"
#include <string>
#include <iostream>

using std::cout;
using std::string;

const int life[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const int stamina[10] = {0,0,0,0,0,0,0,0,0,0};

Pvp::Pvp(string character_name, int attack, int stamTaken)
{
  for(int k = 0; k < sizeof(life); k++){
    cLife[k] = 0;
  }
  for(int l = 0; l < sizeof(stamina); l++){
    cStamina[l] = 0;
  }
  getCharacterName();
  getAttack();
}

Pvp::Pvp(const Pvp& other){
  for(int k = 0; k < sizeof(life); k++){
    cLife[k] = 0;
  }
  for(int l = 0; l < sizeof(stamina); l++){
    cStamina[l] = 0;
  }
  this -> stamTaken = other.stamTaken;
  this -> character_name = other.character_name;
  this -> attack = other.attack;
}

void Pvp::setCharacterName(const string name){
  if(name != ""){
    this -> character_name = name;
    return;
  }
  cout << "Nome inválido";
}

void Pvp::setAttack(int attacks){
  if(attack >= 0){
    this -> attack = attack;
    return;
  }
    cout << "Valor do ataque é inválido";
}
void Pvp::setStamAttack( int stamTaken){
if( stamTaken > 0 && stamTaken < 10){
    this -> stamTaken = stamTaken;
    return;
  }
    cout << "Valor da stamina gasta é inválido";
  
}

void setLife(int cLife[], int attack){
  int one;
  for(one = 0; one < attack; one++){
    cLife[one] = 1; 
  }
}

void setStam(int cStamina[], int stamTaken){
  for(int one2 = 0; one2 < stamTaken; one2++){
    cStamina[one2] = 1; 
  }
}

string Pvp::getCharacterName(){
  return character_name;
}

int Pvp::getAttack(){
  return attack;
}

int Pvp::getLife(){
  int lifeCount;
  int lifeCount2;
  while(lifeCount != sizeof(cLife)){
    lifeCount++;
    if(cLife[lifeCount] == 0){
      lifeCount2 ++;
    }
  }
  return lifeCount2;
}

int Pvp::getStamina(){
  int stamCount;
  int stamCount2;
  while(stamCount != sizeof(cStamina)){
    stamCount++;
    if(cStamina[stamCount] == 0){
      stamCount2++;
    }
  }
  return stamCount2;
}