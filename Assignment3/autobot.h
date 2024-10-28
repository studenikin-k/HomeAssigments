#ifndef AUTOBOT_H
#define AUTOBOT_H
#include "transformer.h"


class Autobot : public Transformer {
public:
    Autobot();
    ~Autobot();

    bool assist();
};

#endif // AUTOBOT_H