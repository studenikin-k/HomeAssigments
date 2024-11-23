#include <iostream>
#include "transformer.h"
#include "gun_type.h"


Transformer::Transformer(std::string gun_type, int damage ,int ammo , std::string fraction)
    : _health(100),_gun_type(gun_type), _damage(damage),
      _move_speed(100), _ammo(ammo), _fraction(fraction)
      {

     std::cout<<"Transformer was created"<<std::endl;

}



Transformer::~Transformer(){

  std::cout<<"Transformer was destroyed"<<std::endl;

}


bool Transformer::transform(){

  std::cout<<"Transformer transforms"<<std::endl;

  return true;
}


bool Transformer::attack(){

    std::cout<<"Transformer attacks with"<< _gun_type <<std::endl;

    return true;
}


bool Transformer::move(){

  std::cout<<"Transformer moves"<<std::endl;

  return true;
}

bool Transformer:: ultimate(){

  std::cout<<"Transformer ultimates"<<std::endl;

  return true;
}


unsigned int Transformer::get_health(){

  return _health;
}

unsigned int Transformer::get_ammo(){

  return _ammo;
}

std::string Transformer::get_fraction(){
  return _fraction;
}

bool Transformer::phrase(){

  std::cout<<"Today you will die!"<<std::endl;

  return true;
}

bool Transformer::operator==(const Transformer& comparable) const{
  	if (this->_health == comparable._health){
          std::cout<<"Health matches"<< std::endl;

          return true;
  	}
    else{
          std::cout<<"Health mismatch!"<<std::endl;
          return false;
        }

}

bool Transformer::operator!=(const Transformer& comparable) const{

  if (this->_health != comparable._health){
    std::cout<<"Health mismatch"<<std::endl;

    return true;
  }
  else{
  	std::cout<<"Health matches"<<std::endl;
  }
}

bool Transformer::operator<=(const Transformer& comparable) const{
  	if (this->_health < comparable._health){
          std::cout<<"Health less than opponent."<<std::endl;
          return true;
  	}
    else if (this->_health > comparable._health){
       std::cout<< "Health more than opponent."<<std::endl;
     	return false;
    }
    else{
      std::cout<<"Health matches"<<std::endl;
      return true;
	}
}

bool Transformer::operator>=(const Transformer& comparable) const{
  	if (this->_health > comparable._health){
          std::cout<<"Health more than opponent."<<std::endl;
          return true;
  	}
    else if (this->_health < comparable._health){
       std::cout<< "Health less than opponent."<<std::endl;
     	return false;
    }
    else{
      std::cout<<"Health matches"<<std::endl;
      return true;
	}
}