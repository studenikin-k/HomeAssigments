#include <iostream>
#include <utility>
#include "gun_type.h"


Gun::Gun(std::string gun_type)
    : _gun_type(std::move(gun_type))
{
      set_auto_riffle_damage(35);
      set_sniper_riffle_damage(70);
      set_bazooka_damage(100);
      set_arm_damage(50);
      set_ammo_auto_riffle(90);
      set_ammo_sniper_riffle(30);
      set_ammo_bazooka(5);
      set_ammo_arm(100);

      std::cout << "Types of gun was created.\n";
}

std::string Gun::Get_gun_type()const{
  return _gun_type;
}



void Gun::set_auto_riffle_damage(unsigned int damage){
  _auto_riffle_damage = damage;
}
void Gun::set_sniper_riffle_damage(unsigned int damage){
  _sniper_riffle_damage = damage;
}
void Gun::set_bazooka_damage(unsigned int damage){
  _bazooka_damage = damage;
}

void Gun::set_arm_damage(unsigned int damage){
  _arm_damage = damage;
}
void Gun::set_ammo_auto_riffle(int ammo){
  _ammo_auto_riffle = ammo;
}
void Gun::set_ammo_sniper_riffle(int ammo){
  _ammo_sniper_riffle = ammo;
}
void Gun::set_ammo_bazooka(int ammo){
  _ammo_bazooka = ammo;
}
void Gun::set_ammo_arm(int ammo){
  _ammo_arm = ammo;
}

unsigned int Gun::get_auto_riffle_damage(){
  return _auto_riffle_damage;
}

unsigned int Gun::get_sniper_riffle_damage(){
  return _sniper_riffle_damage;
}

unsigned int Gun::get_bazooka_damage(){
  return _bazooka_damage;
}

unsigned int Gun::get_arm_damage(){
  return _arm_damage;
}

int Gun::get_ammo_auto_riffle(){
  return _ammo_auto_riffle;
}

int Gun::get_ammo_sniper_riffle(){
  return _ammo_sniper_riffle;
}

int Gun::get_ammo_bazooka(){
  return _ammo_bazooka;
}

int Gun::get_ammo_arm(){
  return _ammo_arm;
}


AKM::AKM(std::string &name):
   Gun(name){

   }