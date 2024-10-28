#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon();
    ~Decepticon();

    bool sabotage();
};

#endif // DECEPTICON_H