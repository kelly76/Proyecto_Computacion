#ifndef _COSTOPERSONAL_H_
#define _COSTOPERSONAL_H_
#include <iostream>
#include "Persona.h"
class CostoPersonal{
    private:
        Persona* persona;
        float costo;
    public:
        CostoPersonal();
        CostoPersonal(Persona);
        void setCosto(float);
        float getCosto()const;
        ~CostoPersonal();
};
CostoPersonal::CostoPersonal(){
    costo=0;
    persona=nullptr;
}
CostoPersonal::CostoPersonal(Persona p){
    costo=p.getSueldo();
}
void CostoPersonal::setCosto(float costo){
    this->costo = costo;
}
float CostoPersonal::getCosto()const{
    return costo;
}
CostoPersonal::~CostoPersonal(){
    std::cout<<"...Destruyendo CostoPersonal...\n";
}
#endif