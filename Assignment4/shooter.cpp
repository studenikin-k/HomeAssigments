#include <iostream>
#include "transformer.h"
#include "shooter.h"

Shooter::Shooter(const std::string &name, const std::string &fraction, const int &health,
                 const std::string &gun_type, const int &damage, const
                 int &ammo, const int &move_speed): Transformer(name, fraction, health, gun_type, damage, ammo,
                                                                move_speed) {
    set_name(name);
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
}

bool Shooter::transform() {
    std::cout << "Shooter transforms" << std::endl;

    return true;
}


bool Shooter::attack() {
    std::cout << "Shooter attacks" << std::endl;

    return true;
}

bool Shooter::move() {
    std::cout << "Shooter moves" << std::endl;

    return true;
}


bool Shooter::jump() {
    std::cout << "Shooter jumps" << std::endl;

    return true;
}

bool Shooter::ultimate() {
    std::cout << "Shooter take a second riffle" << std::endl;

    return true;
}
