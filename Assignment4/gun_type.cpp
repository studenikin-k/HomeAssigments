#include <iostream>
#include "gun_type.h"


Gun_type::Gun_type(std::string gun_type)
    : _gun_type(gun_type), _auto_riffle_damage(35), _sniper_riffle_damage(70), _bazooka_damage(100), _arm_damage(50),
      _ammo_auto_riffle(90), _ammo_sniper_riffle(30), _ammo_bazooka(5), _ammo_arm(100)
{
      std::cout << "Types of gun was created.\n";
}

std::string Gun_type::Get_gun_type(){
  return _gun_type;
}


int Gun_type::Get_damage_of_gun(std::string gun_type){

  if (gun_type == "AKM"){
    return _auto_riffle_damage;
  }
  else if (gun_type == "AWP"){
    return _sniper_riffle_damage;
  }
  else if (gun_type == "BAZOOKA"){
    return _bazooka_damage;
  }
  else if (gun_type == "arm"){
    return _arm_damage;
  }

}

int Gun_type::Get_ammo(std::string gun_type){
   if (gun_type == "AKM"){
    return _ammo_auto_riffle;
  }
  else if (gun_type == "AWP"){
    return _ammo_sniper_riffle;
  }
  else if (gun_type == "BAZOOKA"){
    return _ammo_bazooka;
  }
  else if (gun_type == "arm"){
    return _ammo_arm;
  }

}