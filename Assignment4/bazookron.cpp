#include <iostream>
#include "bazookron.h"


Bazookron::Bazookron(const std::string &name, const std::string &fraction, const int &health,
                     const std::string &gun_type,
                     const int &damage, const int &ammo, const int &move_speed): Transformer(
    name, fraction, health, gun_type, damage, ammo, move_speed) {
    set_name(name);
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    set_stablization(100);
    set_points_to_ulta(0);
    std::cout << name << " was created" << std::endl;
}

Bazookron::~Bazookron() {
    std::cout << name() << " was destroyed" << std::endl;
}


bool Bazookron::guide_gun() {
    std::cout << name() << " adjusts the weapon to the target" << std::endl;
    return true;
}
