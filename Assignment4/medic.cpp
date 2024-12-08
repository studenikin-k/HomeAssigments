#include <iostream>
#include "medic.h"


Medic::Medic(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
             const int &damage, const int &ammo, const int &move_speed): Transformer(name, fraction, health, gun_type,
    damage, ammo, move_speed) {
    set_name(name);
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    set_medicines(100);
    set_points_to_ulta(0);
}

bool Medic::heal() const {
    std::cout << name() << " use medicines to heal" << std::endl;

    return true;
}

bool Medic::ultimate() {
    std::cout << name() << "returns to alive" << std::endl;
}