#include <iostream>
#include "gun_type.h"


Gun::Gun(const std::string &gun_type, const unsigned int &damage, const unsigned int &ammo) {
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);

    std::cout << "Gun was created\n";
}

AKM::AKM(const std::string &name, const unsigned int &damage, const unsigned int &ammo): Gun(name, damage, ammo) {
    set_gun_type(name);
    set_ammo(damage);
    set_damage(ammo);
}

AWP::AWP(const std::string &name, const unsigned int &damage, const unsigned int &ammo): Gun(name, damage, ammo) {
    set_gun_type(name);
    set_ammo(damage);
    set_damage(ammo);
}

Bazooka::Bazooka(const std::string &name, const unsigned int &damage,
                 const unsigned int &ammo): Gun(name, damage, ammo) {
    set_gun_type(name);
    set_ammo(damage);
    set_damage(ammo);
}

Arm::Arm(const std::string &name, const unsigned int &damage, const unsigned int &ammo): Gun(name, damage, ammo) {
    set_gun_type(name);
    set_ammo(damage);
    set_damage(ammo);
}
