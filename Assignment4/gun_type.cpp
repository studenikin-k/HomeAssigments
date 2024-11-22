#include <iostream>
#include "gun_type.h"


Gun_type::Gun_type(std::string gun_type)
    : _auto_riffle("AK-47"), _sniper_riffle("AWP"), _bazooka("BAZOOKA"), _arm("arm"),
	_auto_riffle_damage(45), _sniper_riffle_damage(70), _bazooka_damage(100), _arm_damage(50){
      std::cout << "Types of gun was created.\n";
}

std::string Gun_type::Get_auto_riffle() {
  return _auto_riffle;
}

std::string Gun_type::Get_sniper_riffle(){
	return _sniper_riffle;
}

std::string Gun_type::Get_bazooka(){
  return _bazooka;
}

std::string Gun_type::Get_arm(){
  return _arm;
}

int Gun_type::Get_damage_of_gun(std::string type_of_gun){

  if (type_of_gun == _auto_riffle){
    return _auto_riffle_damage;
  }
  else if (type_of_gun == _sniper_riffle){
    return _sniper_riffle_damage;
  }
  else if (type_of_gun == _bazooka){
    return _bazooka_damage;
  }
  else {
    return _arm_damage;
  }

}

int Gun_type::Get_ammo(std::string gun_type){}