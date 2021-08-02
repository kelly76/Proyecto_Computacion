#ifndef _COSTOLADRILLOS_H_
#define _COSTOLADRILLOS_H_
#include <iostream>
class CostoLadrillos{
    private:
        float costo;
        std::string marca;
        std::string tienda;
        float impuesto;
    public:
        CostoLadrillos();
        CostoLadrillos(float,std::string,std::string);
        void setCosto(float);
        void setImpuesto(float);
        void setMarca(std::string);
        void setTienda(std::string);
        float getCosto()const;
        float getImpuesto()const;
        std::string getMarca()const;
        std::string getTienda()const;
        ~CostoLadrillos();
};
CostoLadrillos::CostoLadrillos(){
    costo=0;
    marca="No definida";
    tienda="No definida";
    impuesto=0.19*costo;
}
CostoLadrillos::CostoLadrillos(float costo, std::string marca, std::string tienda){
    this->costo=costo;
    this->marca=marca;
    this->tienda=tienda;
    impuesto=0.19*costo;
}
void CostoLadrillos::setCosto(float costo){
    this->costo = costo;
}
void CostoLadrillos::setImpuesto(float impuesto){
    this->impuesto = impuesto;
}
void CostoLadrillos::setMarca(std::string marca){
    this->marca=marca;
}
void CostoLadrillos::setTienda(std::string tienda){
    this->tienda = tienda;
}
float CostoLadrillos::getCosto()const{
    return costo;
}
float CostoLadrillos::getImpuesto()const{
    return impuesto;
}
std::string CostoLadrillos::getMarca()const{
    return marca;
}
std::string CostoLadrillos::getTienda()const{
    return tienda;
}
CostoLadrillos::~CostoLadrillos(){
    std::cout<<"...Destruyendo CostoLadrillos...\n";
}
#endif