#include "vector_non_empty_checker.h"
#include <iostream>




bool Vector_non_empty_checker::bar(int, std::vector<float>& vector) {
    return !vector.empty();
}

int Vector_non_empty_checker::c_i_1() {
    return 2;
}
float Vector_non_empty_checker::c_i_2() {
    return 2.0f;
}
void Vector_non_empty_checker::c_i_3() {
    std::cout << "Vector_non_empty_checker c_i_3" << std::endl;
}
