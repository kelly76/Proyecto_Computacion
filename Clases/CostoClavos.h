#ifndef _COSTOCLAVOS_H_
#define _COSTOCLAVOS_H_
#include <iostream>
class CostoClavos{
    private:
        float costo;
        std::string tienda;
        float impuesto;
    public:
        CostoClavos();
        CostoClavos(float,std::string);
        void setCosto(float);
        void setImpuesto(float);
        void setTienda(std::string);
        float getCosto()const;
        float getImpuesto()const;
        std::string getTienda()const;
        ~CostoClavos();
};
CostoClavos::CostoClavos(){
    costo=0;
    tienda="No definida";
    impuesto=0.18*costo;
}
CostoClavos::CostoClavos(float costo, std::string tienda){
    this->costo=costo;
    this->tienda=tienda;
    impuesto=0.18*costo;
}
void CostoClavos::setCosto(float costo){
    this->costo = costo;
}
void CostoClavos::setImpuesto(float impuesto){
    this->impuesto = impuesto;
}
void CostoClavos::setTienda(std::string tienda){
    this->tienda = tienda;
}
float CostoClavos::getCosto()const{
    return costo;
}
float CostoClavos::getImpuesto()const{
    return impuesto;
}
std::string CostoClavos::getTienda()const{
    return tienda;
}
CostoClavos::~CostoClavos(){
    std::cout<<"...Destruyendo CostoClavos...\n";
}
#endif