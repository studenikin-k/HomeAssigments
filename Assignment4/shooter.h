#ifndef SHOOTER_H
#define SHOOTER_H
#include "gun_type.h"
#include "transformer.h"


class Shooter : public Transformer  {
	public:
  		Shooter(const std::string &name,const std::string &gun_type, int damage, int ammo,const std::string &fraction);
    	~Shooter() = default;


    bool transform();
    bool attack();
    bool move();
    bool jump();
    bool ultimate();

};



#endif //SHOOTER_H
