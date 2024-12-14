#include "template_class.h"


template<typename T>
MyTemplateClass<T>::MyTemplateClass(T object, const int number, const std::vector<float> &vector)
    : _instance(object), _number(number), _vector(vector)
{
}

template<typename T>
bool MyTemplateClass<T>::foo()
{
    return _instance.bar(_number, _vector);
}
