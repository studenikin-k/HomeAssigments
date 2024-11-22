#include <iostream>
#include "transformer.h"
#include "gun_type.h"


Transformer::Transformer(std::string gun_type, int damage ,int ammo , std::string fraction)
    : _health(100),_gun_type(gun_type), _damage(damage), _move_speed(100),
      _ammo(ammo), _fraction(fraction)
      {
     std::cout<<"Transformer was created"<<std::endl;
    }