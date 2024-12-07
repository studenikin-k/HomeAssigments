#include <iostream>
#include "transformer.h"
#include "shooter.h"

Shooter::Shooter(const std::string &name,const std::string &gun_type, int damage, int ammo,const std::string &fraction):
      Transformer(name,gun_type,damage,ammo,fraction){
  set_health(100);
  set_move_speed(100);
}

bool Shooter::transform(){
  std::cout << "Shooter transforms" << std::endl;

  return true;
}


bool Shooter::attack(){
  std::cout << "Shooter attacks" << std::endl;

  return true;
}
bool Shooter::move(){
  std::cout << "Shooter moves" << std::endl;

  return true;
}


bool Shooter::jump(){
  std::cout << "Shooter jumps" << std::endl;

  return true;
}

bool Shooter::ultimate(){
  std::cout << "Shooter take a second riffle" << std::endl;

  return true;
}
