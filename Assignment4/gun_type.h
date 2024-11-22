#ifndef GUN_TYPE_H
#define GUN_TYPE_H



class Gun_type {
   public:
	Gun_type::Gun_type(std::string);
    virtual ~Gun_type();
    std::string Get_auto_riffle();
    std::string Get_sniper_riffle();
    std::string Get_bazooka();
    std::string Get_arm();
    int Get_damage_of_gun(std::string type_of_gun);
    int Get_ammo(std::string type_of_gun);
   protected:
       std::string _auto_riffle;
       std::string _sniper_riffle;
       std::string _bazooka;
       std::string _arm;
       constexpr int _auto_riffle_damage;
       constexpr int _sniper_riffle_damage;
       constexpr int _bazooka_damage;
       constexpr int _arm_damage;

};



#endif //GUN_TYPE_H
