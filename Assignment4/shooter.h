#ifndef SHOOTER_H
#define SHOOTER_H
#include "gun_type.h"
#include "transformer.h"


class Shooter : public Transformer  {
	public:
  		Shooter(std::string name,std::string gun_type, int damage, int ammo, std::string fraction);
    	~Shooter();
    private:

};



#endif //SHOOTER_H
