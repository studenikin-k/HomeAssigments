#include <iostream>
#include "gun_type.h"
#include "transformer.h"

int main() {
    AKM akm = AKM("AKM", 30, 90);
    Transformer transformer = Transformer("Transformer", "Divine", 200,
                                          akm.gun_type(),
                                          akm.damage(),
                                          akm.ammo(),
                                          100);

    std::cout << transformer << std::endl;
}
