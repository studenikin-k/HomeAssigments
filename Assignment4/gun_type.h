#ifndef GUN_TYPE_H
#define GUN_TYPE_H



class Gun_type
{
   public:
	Gun_type::Gun_type(std::string);
    virtual ~Gun_type();

    int Get_damage_of_gun(std::string type_of_gun);
    int Get_ammo(std::string type_of_gun);

   protected:
       constexpr int _auto_riffle_damage;
       constexpr int _sniper_riffle_damage;
       constexpr int _bazooka_damage;
       constexpr int _arm_damage;
	   int _ammo_auto_riffle;
       int _ammo_sniper_riffle;
       int _ammo_bazooka;
       int _ammo_arm;
};



#endif //GUN_TYPE_H
