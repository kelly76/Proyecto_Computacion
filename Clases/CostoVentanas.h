#ifndef _COSTOVENTANAS_H_
#define _COSTOVENTANAS_H_
#include <iostream>
class CostoVentanas{
    private:
        float costo;
        std::string marca;
        std::string tienda;
        float impuesto;
    public:
        CostoVentanas();
        CostoVentanas(float,std::string,std::string);
        void setCosto(float);
        void setImpuesto(float);
        void setMarca(std::string);
        void setTienda(std::string);
        float getCosto()const;
        float getImpuesto()const;
        std::string getMarca()const;
        std::string getTienda()const;
        ~CostoVentanas();
};
CostoVentanas::CostoVentanas(){
    costo=0;
    marca="No definida";
    tienda="No definida";
    impuesto=0.18*costo;
}
CostoVentanas::CostoVentanas(float costo, std::string marca, std::string tienda){
    this->costo=costo;
    this->marca=marca;
    this->tienda=tienda;
    impuesto=0.18*costo;
}
void CostoVentanas::setCosto(float costo){
    this->costo = costo;
}
void CostoVentanas::setImpuesto(float impuesto){
    this->impuesto = impuesto;
}
void CostoVentanas::setMarca(std::string marca){
    this->marca=marca;
}
void CostoVentanas::setTienda(std::string tienda){
    this->tienda = tienda;
}
float CostoVentanas::getCosto()const{
    return costo;
}
float CostoVentanas::getImpuesto()const{
    return impuesto;
}
std::string CostoVentanas::getMarca()const{
    return marca;
}
std::string CostoVentanas::getTienda()const{
    return tienda;
}
CostoVentanas::~CostoVentanas(){
    std::cout<<"...Destruyendo CostoVentanas...\n";
}
#endif