#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>

#include "voice.h"

class Transformer
{
public:
    Transformer(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
                const int &damage, const int &ammo, const int &move_speed, const Voice &voice);

    Transformer(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
                const int &damage, const int &ammo, const int &move_speed);

    virtual ~Transformer();

    std::string get_name() const
    {
        return _name;
    }

    void set_name(std::string name)
    {
        _name = std::move(name);
    }

    unsigned int get_health() const
    {
        return _health;
    }

    void set_health(unsigned int health)
    {
        _health = health;
    }

    std::string get_gun_type() const
    {
        return _gun_type;
    }

    void set_gun_type(std::string gun_type)
    {
        _gun_type = std::move(gun_type);
    }

    unsigned int get_damage() const
    {
        return _damage;
    }

    void set_damage(unsigned int damage)
    {
        _damage = damage;
    }

    unsigned int move_speed() const
    {
        return _move_speed;
    }

    void set_move_speed(unsigned int move_speed)
    {
        _move_speed = move_speed;
    }

    unsigned int get_ammo() const
    {
        return _ammo;
    }

    void set_ammo(unsigned int ammo)
    {
        _ammo = ammo;
    }

    std::string get_fraction() const
    {
        return _fraction;
    }


    void set_fraction(std::string fraction)
    {
        _fraction = std::move(fraction);
    }

    Voice *get_voice() const
    {
        return _voice;
    }

    void set_voice(const Voice &voice)
    {
        if (_voice != nullptr)
        {
            *_voice = voice;
            return;
        }
        _voice = new Voice(voice);
    }

    bool transform() const;

    bool attack() const;

    bool move() const;

    bool jump() const;

    virtual bool ultimate();


    static bool phrase();

private:
    std::string _name;

    unsigned int _health;

    std::string _gun_type;

    unsigned int _damage;
    unsigned int _move_speed;
    unsigned int _ammo;
    std::string _fraction;

    Voice *_voice;
};


#endif //TRANSFORMER_H
