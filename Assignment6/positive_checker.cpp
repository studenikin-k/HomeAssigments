#include "positive_checker.h"
#include <iostream>

bool Positive_checker::bar(int number, std::vector<float> &)
{
    return number > 0;
}

int Positive_checker::c_i_1()
{
    return 1;
}

float Positive_checker::c_i_2()
{
    return 1.0f;
}

void Positive_checker::c_i_3()
{
    std::cout << "Positive_checker c_i_3" << std::endl;
}
