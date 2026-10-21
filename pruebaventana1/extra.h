#ifndef EXTRA_H
#define EXTRA_H
#include<string>

class HolaMundo{
    private:
    std::string mensaje;
    public:
    HolaMundo(const std::string& mensaje);
    void mostrarmensaje (const std::string& mensaje);
};
#endif