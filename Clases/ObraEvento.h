#ifndef _OBRAEVENTO_H_
#define _OBRAEVENTO_H_
#include <iostream>
#include "Obra.h"
class ObraEvento : protected Obra{
    private:
        float costoTotal;
        Lista muebles;
        Lista implementos;
        Lista   personal;
    public:
        ObraEvento();
        ~ObraEvento();
};
ObraEvento::ObraEvento() : Obra(){
    costoTotal=0;
}
ObraEvento::~ObraEvento(){
    std::cout<<"...Destruyendo ObraEvento...\n";
}
#endif