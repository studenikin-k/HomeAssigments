#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>
#include "gun_type.h"

class Transformer {
    public:

    Transformer(std::string name,std::string gun_type, int damage, int ammo, std::string fraction);
    ~Transformer();

    bool transform();
    bool attack();
    bool move();
    bool jump();
    bool ultimate();

    unsigned int get_health();
    unsigned int get_ammo();
    std::string get_fraction();

	bool phrase();


    bool operator==(const Transformer& comparable) const;
    bool operator!=(const Transformer& comparable) const;
    bool operator<=(const Transformer& comparable) const;
    bool operator>=(const Transformer& comparable) const;

    friend std::ostream& operator<<(std::ostream& os, const Transformer& t);

    private:
	  std::string _name;

      unsigned int _health;

      std::string _gun_type;

      unsigned int _damage;
      unsigned int _move_speed;
      unsigned int _ammo;

      std::string  _fraction;
};




#endif //TRANSFORMER_H
