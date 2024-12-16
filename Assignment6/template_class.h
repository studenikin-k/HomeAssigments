#ifndef TEMPLATE_CLASS_H
#define TEMPLATE_CLASS_H
#include <vector>
#include "positive_checker.h"
#include "vector_non_empty_checker.h"
#include "negative_size_checker.h"

template<class T>
class Template_class
{
public:
    Template_class(T obj, int num, const std::vector<float>& v);
    ~Template_class()=default;

    bool foo();
private:
    T _instance{};
    int _number;
    std::vector<float> _vector;

};

template class Template_class<positive_checker>;
template class Template_class<vector_non_empty_checker>;
template class Template_class<negative_size_checker>;



#endif //TEMPLATE_CLASS_H
