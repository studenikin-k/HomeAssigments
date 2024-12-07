#include <iostream>
#include "gun_type.h"
#include "transformer.h"

int main() {
  Gun akm = Gun("AKM");
  Transformer transformer = Transformer("Transformer",
    akm.Get_gun_type(),
    akm.get_auto_riffle_damage(),
    akm.get_ammo_auto_riffle(),
    "Divine"
);

  std::cout << transformer << std::endl;

}