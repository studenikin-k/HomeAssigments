#ifndef GUN_TYPE_H
#define GUN_TYPE_H



class Gun {
   public:
	Gun(std::string );
    ~Gun() = default;

    void set_gun_type(std::string &name)const;
    void set_damage(unsigned int)const;
    unsigned int get_damage()const;
    void set_ammo(unsigned int)const;
    unsigned int get_ammo()const;
    std::string Get_gun_type()const;



	void set_auto_riffle_damage(unsigned int damage);
    void set_sniper_riffle_damage(unsigned int damage);
    void set_bazooka_damage(unsigned int damage);
    void set_arm_damage(unsigned int damage);
	void set_ammo_auto_riffle(int ammo);
    void set_ammo_sniper_riffle(int ammo);
    void set_ammo_bazooka(int ammo);
    void set_ammo_arm(int ammo);

    unsigned int get_auto_riffle_damage();
    unsigned int get_sniper_riffle_damage();
    unsigned int get_bazooka_damage();
    unsigned int get_arm_damage();
    int get_ammo_auto_riffle();
    int get_ammo_sniper_riffle();
    int get_ammo_bazooka();
    int get_ammo_arm();


  protected:
       std::string _gun_type;

       unsigned int _auto_riffle_damage{};
       unsigned int _sniper_riffle_damage{};
       unsigned int _bazooka_damage{};
       unsigned int _arm_damage{};
	   int _ammo_auto_riffle{};
       int _ammo_sniper_riffle{};
       int _ammo_bazooka{};
       int _ammo_arm{};
};

class AKM : public Gun{
  public:
    AKM(std::string &name);
};
#endif //GUN_TYPE_H
