#ifndef FABRICA_H
#define FABRICA_H

#include "producto.h"
#include "maquina.h"
#include <iostream>
using namespace std;

class fabrica{
    public:
        fabrica(){}
        ~fabrica(){}
        virtual producto* crear_producto()=0;
        void operacionCosto(float _costo){
            producto* prod=this->crear_producto();
            prod->setCosto(_costo);
            cout<<"operacion hecha, obtenemos costo "<<prod->getCosto()<<endl;
            delete prod;
        }
};


#endif // FABRICA_H
