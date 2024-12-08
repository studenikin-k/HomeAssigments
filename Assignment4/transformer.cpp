#include <iostream>
#include "transformer.h"
#include "gun_type.h"


Transformer::Transformer(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &gun_type, const int &damage, const
                         int &ammo, const int &move_speed) {
    set_name(name);
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    std::cout << name << " was created" << std::endl;
}


Transformer::~Transformer() {
    std::cout << name() << " was destroyed" << std::endl;
}


bool Transformer::transform() const {
    std::cout << name() << " transforms" << std::endl;

    return true;
}


bool Transformer::attack() const {
    std::cout << name() << "attacks with" << gun_type() << std::endl;

    return true;
}


bool Transformer::move() const {
    std::cout << name() << " moves" << std::endl;

    return true;
}

bool Transformer::jump() const {
    std::cout << name() << " jumps" << std::endl;
    return true;
}

bool Transformer::ultimate() {
    std::cout << "Transformer ultimates" << std::endl;

    return true;
}


bool Transformer::phrase() {
    std::cout << "Today you will die!" << std::endl;

    return true;
}


bool Transformer::operator==(const Transformer &comparable) const {
    if (this->_health == comparable._health) {
        std::cout << "Health matches" << std::endl;

        return true;
    } else {
        std::cout << "Health mismatch!" << std::endl;
        return false;
    }
}

bool Transformer::operator!=(const Transformer &comparable) const {
    if (this->_health != comparable._health) {
        std::cout << "Health mismatch" << std::endl;

        return true;
    } else {
        std::cout << "Health matches" << std::endl;

        return false;
    }
}

bool Transformer::operator<=(const Transformer &comparable) const {
    if (this->_health < comparable._health) {
        std::cout << "Health less than opponent." << std::endl;
        return true;
    } else if (this->_health > comparable._health) {
        std::cout << "Health more than opponent." << std::endl;
        return false;
    } else {
        std::cout << "Health matches" << std::endl;
        return true;
    }
}

bool Transformer::operator>=(const Transformer &comparable) const {
    if (this->_health > comparable._health) {
        std::cout << "Health more than opponent." << std::endl;
        return true;
    } else if (this->_health < comparable._health) {
        std::cout << "Health less than opponent." << std::endl;
        return false;
    } else {
        std::cout << "Health matches" << std::endl;
        return true;
    }
}


std::ostream &operator<<(std::ostream &os, const Transformer &transformer) {
    os << "Fraction: " << transformer.fraction() << "\nName: " << transformer.name()
            << "\nGun: " << transformer.gun_type() << "\nDamage: " << transformer.damage()
            << "\nAmmmo: " << transformer.ammo() << "\nMove speed: " << transformer.move_speed()
            << "\nHealth: " << transformer.health() << std::endl;
    return os;
}
