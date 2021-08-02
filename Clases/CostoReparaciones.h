#ifndef _COSTOREPARACIONES_H_
#define _COSTOREPARACIONES_H_
#include <iostream>
class CostoReparaciones{
    private:
        float costo;
        std::string tienda;
        float impuesto;
    public:
        CostoReparaciones();
        CostoReparaciones(float,std::string);
        void setCosto(float);
        void setImpuesto(float);
        void setTienda(std::string);
        float getCosto()const;
        float getImpuesto()const;
        std::string getTienda()const;
        ~CostoReparaciones();
};
CostoReparaciones::CostoReparaciones(){
    costo=0;
    tienda="No definida";
    impuesto=0.18*costo;
}
CostoReparaciones::CostoReparaciones(float costo, std::string tienda){
    this->costo=costo;
    this->tienda=tienda;
    impuesto=0.18*costo;
}
void CostoReparaciones::setCosto(float costo){
    this->costo = costo;
}
void CostoReparaciones::setImpuesto(float impuesto){
    this->impuesto = impuesto;
}
void CostoReparaciones::setTienda(std::string tienda){
    this->tienda = tienda;
}
float CostoReparaciones::getCosto()const{
    return costo;
}
float CostoReparaciones::getImpuesto()const{
    return impuesto;
}
std::string CostoReparaciones::getTienda()const{
    return tienda;
}
CostoReparaciones::~CostoReparaciones(){
    std::cout<<"...Destruyendo CostoReparaciones...\n";
}
#endif