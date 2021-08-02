#ifndef _OBRA_H_
#define _OBRA_H_
#include <iostream>
class Obra{
    protected:
        std::string nombre;
    public:
        Obra();
        Obra(std::string);
        ~Obra();
};
Obra::Obra(){
    nombre = "No definido";
}
Obra::Obra(std::string nombre){
    this->nombre = nombre;
}
Obra::~Obra(){
    std::cout<<"...Destruyendo Obra...\n";
}
#endif
