#ifndef _COSTOPUERTAS_H_
#define _COSTOPUERTAS_H_
#include <iostream>
class CostoPuertas{
    private:
        float costo;
        std::string marca;
        std::string tienda;
        float impuesto;
    public:
        CostoPuertas();
        CostoPuertas(float,std::string,std::string);
        void setCosto(float);
        void setImpuesto(float);
        void setMarca(std::string);
        void setTienda(std::string);
        float getCosto()const;
        float getImpuesto()const;
        std::string getMarca()const;
        std::string getTienda()const;
        ~CostoPuertas();
};
CostoPuertas::CostoPuertas(){
    costo=0;
    marca="No definida";
    tienda="No definida";
    impuesto=0.18*costo;
}
CostoPuertas::CostoPuertas(float costo, std::string marca, std::string tienda){
    this->costo=costo;
    this->marca=marca;
    this->tienda=tienda;
    impuesto=0.18*costo;
}
void CostoPuertas::setCosto(float costo){
    this->costo = costo;
}
void CostoPuertas::setImpuesto(float impuesto){
    this->impuesto = impuesto;
}
void CostoPuertas::setMarca(std::string marca){
    this->marca=marca;
}
void CostoPuertas::setTienda(std::string tienda){
    this->tienda = tienda;
}
float CostoPuertas::getCosto()const{
    return costo;
}
float CostoPuertas::getImpuesto()const{
    return impuesto;
}
std::string CostoPuertas::getMarca()const{
    return marca;
}
std::string CostoPuertas::getTienda()const{
    return tienda;
}
CostoPuertas::~CostoPuertas(){
    std::cout<<"...Destruyendo CostoPuertas...\n";
}
#endif