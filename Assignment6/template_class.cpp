#include "template_class.h"


template<typename T>
Template_class<T>::Template_class(T object, const int number, const std::vector<float> &vector)
    : _instance(object), _number(number), _vector(vector)
{
}

template<typename T>
bool Template_class<T>::foo()
{
    return _instance.bar(_number, _vector);
}

template class Template_class<positive_checker>;
template class Template_class<vector_non_empty_checker>;
template class Template_class<negative_size_checker>;