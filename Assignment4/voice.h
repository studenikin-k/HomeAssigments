#ifndef VOICE_H
#define VOICE_H
#include <string>

class Voice {
public:
    Voice(std::string);

    ~Voice();

    std::string voice() const {
        return _voice;
    }

    void set_voice(std::string voice) {
        this->_voice = voice;
    }

    bool phrase();

private:
    std::string _voice;
};


#endif //VOICE_H
