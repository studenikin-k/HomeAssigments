#include <iostream>
#include "gun_type.h"


Gun_type::Gun_type(std::string gun_type)
    : _gun_type(gun_type)
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

std::string Gun_type::Get_gun_type(){
  return _gun_type;
}



void Gun_type::set_auto_riffle_damage(unsigned int damage){
  _auto_riffle_damage = damage;
}
void Gun_type::set_sniper_riffle_damage(unsigned int damage){
  _sniper_riffle_damage = damage;
}
void Gun_type::set_bazooka_damage(unsigned int damage){
  _bazooka_damage = damage;
}

void Gun_type::set_arm_damage(unsigned int damage){
  _arm_damage = damage;
}
void Gun_type::set_ammo_auto_riffle(int ammo){
  _ammo_auto_riffle = ammo;
}
void Gun_type::set_ammo_sniper_riffle(int ammo){
  _ammo_sniper_riffle = ammo;
}
void Gun_type::set_ammo_bazooka(int ammo){
  _ammo_bazooka = ammo;
}
void Gun_type::set_ammo_arm(int ammo){
  _ammo_arm = ammo;
}

unsigned int Gun_type::get_auto_riffle_damage(){
  return _auto_riffle_damage;
}

unsigned int Gun_type::get_sniper_riffle_damage(){
  return _sniper_riffle_damage;
}

unsigned int Gun_type::get_bazooka_damage(){
  return _bazooka_damage;
}

unsigned int Gun_type::get_arm_damage(){
  return _arm_damage;
}

int Gun_type::get_ammo_auto_riffle(){
  return _ammo_auto_riffle;
}

int Gun_type::get_ammo_sniper_riffle(){
  return _ammo_sniper_riffle;
}

int Gun_type::get_ammo_bazooka(){
  return _ammo_bazooka;
}

int Gun_type::get_ammo_arm(){
  return _ammo_arm;
}