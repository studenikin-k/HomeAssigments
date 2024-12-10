#include "voice.h"

#include <iostream>
#include <ostream>


Voice::Voice(std::string voice)
{
    set_voice(voice);
}



bool Voice::get_phrase() const
{

    std::cout << _voice << " and something else"<< std::endl;
    return true;
}

