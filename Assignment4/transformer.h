#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>
#include "gun_type.h"

class Transformer {
public:
    Transformer(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
                const int &damage, const int &ammo, const int &move_speed);

    ~Transformer();

    std::string name() const {
        return _name;
    }

    void set_name(std::string name) {
        _name = std::move(name);
    }

    unsigned int health() const {
        return _health;
    }

    void set_health(unsigned int health) {
        _health = health;
    }

    std::string gun_type() const {
        return _gun_type;
    }

    void set_gun_type(std::string gun_type) {
        _gun_type = std::move(gun_type);
    }

    unsigned int damage() const {
        return _damage;
    }

    void set_damage(unsigned int damage) {
        _damage = damage;
    }

    unsigned int move_speed() const {
        return _move_speed;
    }

    void set_move_speed(unsigned int move_speed) {
        _move_speed = move_speed;
    }

    unsigned int ammo() const {
        return _ammo;
    }

    void set_ammo(unsigned int ammo) {
        _ammo = ammo;
    }

    std::string fraction() const {
        return _fraction;
    }


    void set_fraction(std::string fraction) {
        _fraction = std::move(fraction);
    }

    bool transform();

    bool attack();

    bool move();

    bool jump();

    bool ultimate();


    bool phrase();


    bool operator==(const Transformer &comparable) const;

    bool operator!=(const Transformer &comparable) const;

    bool operator<=(const Transformer &comparable) const;

    bool operator>=(const Transformer &comparable) const;

    bool operator>(const Transformer &comparable) const;

    bool operator<(const Transformer &comparable) const;

private:
    std::string _name;

    unsigned int _health;

    std::string _gun_type;

    unsigned int _damage;
    unsigned int _move_speed;
    unsigned int _ammo;
    std::string _fraction;
};

std::ostream &operator<<(std::ostream &os, const Transformer &t);


#endif //TRANSFORMER_H
