#include <iostream>
#include "transformer.h"
#include "voice.h"


Transformer::Transformer(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &gun_type, const int &damage, const
                         int &ammo, const int &move_speed, const Voice &voice)
{
    set_name(name);
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    _voice = new Voice(voice);
    std::cout << name << " was created" << std::endl;
}


Transformer::Transformer(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &gun_type, const int &damage, const
                         int &ammo, const int &move_speed)
{
    set_name(name);
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    _voice = nullptr;
    std::cout << name << " was created" << std::endl;
}


Transformer::~Transformer()
{
    delete _voice;
    _voice = nullptr;
    std::cout << get_name() << " was destroyed" << std::endl;
}


bool Transformer::transform() const
{
    std::cout << get_name() << " transforms" << std::endl;

    return true;
}


bool Transformer::attack() const
{
    std::cout << get_name() << " attacks with " << get_gun_type() << std::endl;

    return true;
}


bool Transformer::move() const
{
    std::cout << get_name() << " moves" << std::endl;

    return true;
}

bool Transformer::jump() const
{
    std::cout << get_name() << " jumps" << std::endl;
    return true;
}

bool Transformer::ultimate()
{
    std::cout << "Transformer ultimates" << std::endl;

    return true;
}


bool Transformer::phrase()
{
    std::cout << "Today you will die!" << std::endl;

    return true;
}


bool Transformer::operator==(const Transformer &comparable) const
{
    if (this->_health == comparable._health)
    {
        std::cout << "Health matches" << std::endl;

        return true;
    }
    else
    {
        std::cout << "Health mismatch!" << std::endl;
        return false;
    }
}

bool Transformer::operator!=(const Transformer &comparable) const
{
    if (this->_health != comparable._health)
    {
        std::cout << "Health mismatch" << std::endl;

        return true;
    }
    else
    {
        std::cout << "Health matches" << std::endl;

        return false;
    }
}

bool Transformer::operator<=(const Transformer &comparable) const
{
    if (this->_health < comparable._health)
    {
        std::cout << "Health " << this->get_name() << " less than " << comparable.get_name() << std::endl;
        return true;
    }
    else if (this->_health > comparable._health)
    {
        std::cout << "Health " << this->_name << " more than " << comparable.get_name() << std::endl;
        return false;
    }
    std::cout << "Health matches" << std::endl;
    return true;
}

bool Transformer::operator>=(const Transformer &comparable) const
{
    if (this->_health > comparable._health)
    {
        std::cout << "Health " << this->get_name() << " more than " << comparable.get_name() << std::endl;
        return true;
    }
    else if (this->_health < comparable._health)
    {
        std::cout << "Health " << this->_name << " less than " << comparable.get_name() << std::endl;
        return false;
    }
    std::cout << "Health matches" << std::endl;
    return true;
}

bool Transformer::operator>(const Transformer &comparable) const
{
    if (this->_health > comparable._health)
    {
        std::cout << "Health " << this->get_name() << " more than " << comparable.get_name() << std::endl;
        return true;
    }

    std::cout << "Health " << this->_name << " less than " << comparable.get_name() << std::endl;
    return false;
}

bool Transformer::operator<(const Transformer &comparable) const
{
    if (this->_health < comparable._health)
    {
        std::cout << "Health " << this->get_name() << " less than " << comparable.get_name() << std::endl;
        return true;
    }

    std::cout << "Health " << this->_name << " more than " << comparable.get_name() << std::endl;
    return false;
}

std::ostream &operator<<(std::ostream &os, const Transformer &transformer)
{
    os << "Fraction: " << transformer.get_fraction() << "\nName: " << transformer.get_name()
       << "\nGun: " << transformer.get_gun_type() << "\nDamage: " << transformer.get_damage()
       << "\nAmmmo: " << transformer.get_ammo() << "\nMove speed: " << transformer.move_speed()
       << "\nHealth: " << transformer.get_health() << std::endl;
    return os;
}
