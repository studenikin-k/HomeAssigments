#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>
#include "gun_type.h"

class Transformer {
    public:
    Transformer(std::string gun_type,int damage);
    virtual ~Transformer();
    private:
      int _health;
      std::string _gun_type;
      unsigned int _damage;
      unsigned int _move_speed;
      unsigned int _ammo
      std::string  _fraction;
};



#endif //TRANSFORMER_H
