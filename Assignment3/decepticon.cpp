#include "decepticon.h"
#include <iostream>

Decepticon::Decepticon() {
    std::cout << "Decepticon создан.\n";
}

Decepticon::~Decepticon() {
    std::cout << "Decepticon уничтожен.\n";
}

bool Decepticon::sabotage() {
    std::cout << "Decepticon проводит саботаж.\n";
    return true;
}