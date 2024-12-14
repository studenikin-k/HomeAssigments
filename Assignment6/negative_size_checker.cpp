#include "negative_size_checker.h"


bool Negative_size_checker::bar(int number, std::vector<float> &vec)
{
    return number == static_cast<int>(vec.size()) * -1;
}

int Negative_size_checker::c_i_1()
{
    return 3;
}
float Negative_size_checker::c_i_2()
{
    return 3.0f;
}
void Negative_size_checker::c_i_3()
{
    std::cout << "NegativeSizeChecker c_i_3" << std::endl;
}
