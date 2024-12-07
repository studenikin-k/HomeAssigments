#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>
#include "gun_type.h"

class Transformer {
    public:

    Transformer(const std::string &name,const std::string &gun_type, int damage, int ammo, const std::string &fraction);
    ~Transformer();

    bool transform();
    bool attack();
    bool move();
    bool jump();
    bool ultimate();

    std::string get_name()const;
    unsigned int get_health()const;
    std::string get_gun_type()const;
    int get_damage()const;
    unsigned int get_move_speed()const;
    unsigned int get_ammo()const;
    std::string get_fraction()const;

    void set_health(unsigned int health);
    void set_move_speed(unsigned int speed);

	bool phrase();


    bool operator==(const Transformer& comparable) const;
    bool operator!=(const Transformer& comparable) const;
    bool operator<=(const Transformer& comparable) const;
    bool operator>=(const Transformer& comparable) const;
	bool operator>(const Transformer& comparable) const;
    bool operator<(const Transformer& comparable) const;



    protected:
	  std::string _name;

      unsigned int _health;

      std::string _gun_type;

      unsigned int _damage;
      unsigned int _move_speed;
      unsigned int _ammo;
      std::string  _fraction;

};

std::ostream& operator<<(std::ostream& os, const Transformer& t);


#endif //TRANSFORMER_H
