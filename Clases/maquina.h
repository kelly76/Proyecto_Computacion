#ifndef MAQUINA_H
#define MAQUINA_H

#include <iostream>
#include "producto.h"
using namespace std;

class maquina : public producto{
    public:
        maquina():producto(){
            cout<<"maquina construida"<<endl;
        }
        void setCosto(float _costo){
            costo=_costo;
        }
        float getCosto(){
            return costo;
        }
};

#endif // MAQUINA_H
