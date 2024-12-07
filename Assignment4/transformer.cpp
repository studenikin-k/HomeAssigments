#include <iostream>
#include "transformer.h"
#include "gun_type.h"


Transformer::Transformer(const std::string &name,const std::string &gun_type, int damage ,int ammo ,const std::string &fraction)
    : _name(name),_gun_type(gun_type), _damage(damage), _ammo(ammo), _fraction(fraction)
      {
		set_health(200);
        set_move_speed(100);
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

std::string Transformer::get_name()const{
  return _name;
}


unsigned int Transformer::get_health()const{

  return _health;
}

std::string Transformer::get_gun_type()const{
  return _gun_type;
}

int Transformer::get_damage()const{
  return _damage;
}

unsigned int Transformer::get_move_speed()const{
  return _move_speed;
}


unsigned int Transformer::get_ammo()const{

  return _ammo;
}

std::string Transformer::get_fraction()const{
  return _fraction;
}


void Transformer::set_health(unsigned int health){
  _health = health;
}


void Transformer::set_move_speed(unsigned int move_speed){
  _move_speed = move_speed;
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

    return false;
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



std::ostream& operator<<(std::ostream& os, const Transformer& transformer){
	os << "Fraction: " << transformer.get_fraction() << "\nName: " << transformer.get_name()
    << "\nGun: "<< transformer.get_gun_type() << "\nHealth: "<< transformer.get_health() << std::endl;
    return os;
}