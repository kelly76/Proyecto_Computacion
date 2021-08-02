#ifndef _COSTOFIERRO_H_
#define _COSTOFIERRO_H_
#include <iostream>
class CostoFierro{
    private:
        float costo;
        std::string marca;
        std::string tienda;
        float impuesto;
    public:
        CostoFierro();
        CostoFierro(float,std::string,std::string);
        void setCosto(float);
        void setImpuesto(float);
        void setMarca(std::string);
        void setTienda(std::string);
        float getCosto()const;
        float getImpuesto()const;
        std::string getMarca()const;
        std::string getTienda()const;
        ~CostoFierro();
};
CostoFierro::CostoFierro(){
    costo=0;
    marca="No definida";
    tienda="No definida";
    impuesto=0.18*costo;
}
CostoFierro::CostoFierro(float costo, std::string marca, std::string tienda){
    this->costo=costo;
    this->marca=marca;
    this->tienda=tienda;
    impuesto=0.18*costo;
}
void CostoFierro::setCosto(float costo){
    this->costo = costo;
}
void CostoFierro::setImpuesto(float impuesto){
    this->impuesto = impuesto;
}
void CostoFierro::setMarca(std::string marca){
    this->marca=marca;
}
void CostoFierro::setTienda(std::string tienda){
    this->tienda = tienda;
}
float CostoFierro::getCosto()const{
    return costo;
}
float CostoFierro::getImpuesto()const{
    return impuesto;
}
std::string CostoFierro::getMarca()const{
    return marca;
}
std::string CostoFierro::getTienda()const{
    return tienda;
}
CostoFierro::~CostoFierro(){
    std::cout<<"...Destruyendo CostoFierro...\n";
}
#endif
