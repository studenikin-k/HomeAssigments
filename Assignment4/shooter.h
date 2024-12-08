#ifndef SHOOTER_H
#define SHOOTER_H
#include "gun_type.h"
#include "transformer.h"


class Shooter : public Transformer {
public:
    unsigned int & rage1() {
        return rage;
    }

    void set_rage(unsigned int rage) {
        this->rage = rage;
    }

    unsigned int & points_to_ulta1() {
        return points_to_ulta;
    }

    void set_points_to_ulta(unsigned int points_to_ulta) {
        this->points_to_ulta = points_to_ulta;
    }

    Shooter(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
            const int &damage, const int &ammo, const int &move_speed);

    ~Shooter() = default;


    bool transform();

    bool attack();

    bool defend();

    bool move();

    bool jump();

    bool ultimate();

    private:

    unsigned int rage;
    unsigned int points_to_ulta;
};


#endif //SHOOTER_H
