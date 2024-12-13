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

