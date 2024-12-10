#include "voice.h"

#include <iostream>
#include <ostream>


Voice::Voice(std::string voice)
{
    set_voice(voice);
}



bool Voice::phrase() const
{
    std::cout << _voice << std::endl;
    return true;
}

