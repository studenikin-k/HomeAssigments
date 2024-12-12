#ifndef MEDIC_H
#define MEDIC_H
#include "transformer.h"


class Medic : public Transformer
{
public:
    Medic(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
          const int &damage, const int &ammo, const int &move_speed);

    ~Medic() = default;

    bool heal() const;

    bool attack() const override;

    bool ultimate() override;


    unsigned int get_medicines() const
    {
        return _medicines;
    }

    void set_medicines(unsigned int medicines)
    {
        _medicines = medicines;
    }

    unsigned int get_points_to_ulta() const
    {
        return _points_to_ulta;
    }

    void set_points_to_ulta(unsigned int points_to_ulta)
    {
        _points_to_ulta = points_to_ulta;
    }

    std::string get_class_name() const override {
        std::string name = "Class: Medic\n";
        return name;
    }

private:
    unsigned int _medicines;
    unsigned int _points_to_ulta;
};


#endif //MEDIC_H