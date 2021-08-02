#ifndef FABRICA_MAQUINA_H
#define FABRICA_MAQUINA_H

#include "fabrica.h"
using namespace std;

class fabrica_maquina : public fabrica{
    public:
        fabrica_maquina(){}
        producto* crear_producto(){
            return new maquina();
        }
};

#endif
