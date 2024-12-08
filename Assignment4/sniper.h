//
// Created by basybe on 12/8/24.
//

#ifndef SNIPER_H
#define SNIPER_H
#include "transformer.h"


class Sniper : public Transformer {
    Sniper(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
            const int &damage, const int &ammo, const int &move_speed);
};



#endif //SNIPER_H
