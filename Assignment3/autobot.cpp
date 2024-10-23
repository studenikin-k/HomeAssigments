#include "autobot.h"
#include <iostream>

Autobot::Autobot() {
    std::cout << "Autobot создан.\n";
}

Autobot::~Autobot() {
    std::cout << "Autobot уничтожен.\n";
}

bool Autobot::assist() {
    std::cout << "Autobot оказывает помощь.\n";
    return true;
}