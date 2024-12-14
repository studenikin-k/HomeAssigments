#ifndef TEMPLATE_CLASS_H
#define TEMPLATE_CLASS_H
#include <vector>

template<class T>
class MyTemplateClass {
public:
    MyTemplateClass(T obj, int num, const std::vector<float>& v);
    ~MyTemplateClass()=default;

    bool foo();
private:
    T _instance{}; // Экземпляр типа T
    int _number; // Поле для числа
    std::vector<float> _vector; // Поле для вектора

};


#endif //TEMPLATE_CLASS_H
