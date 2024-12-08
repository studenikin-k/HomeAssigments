//
// Created by basybe on 12/8/24.
//

#ifndef SNIPER_H
#define SNIPER_H
#include "transformer.h"


class Sniper : public Transformer {
  public:
  Sniper(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
            const int &damage, const int &ammo, const int &move_speed);

  ~Sniper();


    unsigned int & mind_control() {
        return _mind_control;
    }

    void set_rage(unsigned int mind_control) {
        this->_mind_control = mind_control;
    }

    unsigned int & points_to_ulta() {
        return _points_to_ulta;
    }

    void set_points_to_ulta(unsigned int points_to_ulta) {
        this->_points_to_ulta = points_to_ulta;
    }

    bool transform();

    bool attack();

    bool scope();

    bool hide();

    bool move();

    bool jump();

    bool ultimate();
    private:
      unsigned int _mind_control;
      unsigned int _points_to_ulta;
};



#endif //SNIPER_H
