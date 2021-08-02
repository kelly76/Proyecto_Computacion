#ifndef _COSTOIMPLEMENTOS_H_
#define _COSTOIMPLEMENTOS_H_
#include <iostream>
class CostoImplementos{
    private:
        float costo;
        std::string marca;
        std::string tienda;
        float impuesto;
        std::string nombre;
    public:
        CostoImplementos();
        CostoImplementos(float,std::string,std::string,std::string);
        void setCosto(float);
        void setImpuesto(float);
        void setMarca(std::string);
        void setTienda(std::string);
        void setNombre(std::string);
        float getCosto()const;
        float getImpuesto()const;
        std::string getMarca()const;
        std::string getTienda()const;
        std::string getNombre()const;
        ~CostoImplementos();
};
CostoImplementos::CostoImplementos(){
    costo=0;
    marca="No definida";
    tienda="No definida";
    impuesto=0.18*costo;
    nombre="No definido";
}
CostoImplementos::CostoImplementos(float costo, std::string marca, std::string tienda, std::string nombre){
    this->costo=costo;
    this->nombre=nombre;
    this->marca=marca;
    this->tienda=tienda;
    impuesto=0.18*costo;
}
void CostoImplementos::setCosto(float costo){
    this->costo = costo;
}
void CostoImplementos::setImpuesto(float impuesto){
    this->impuesto = impuesto;
}
void CostoImplementos::setMarca(std::string marca){
    this->marca=marca;
}
void CostoImplementos::setTienda(std::string tienda){
    this->tienda = tienda;
}
void CostoImplementos::setNombre(std::string nombre){
    this->nombre = nombre;
}
float CostoImplementos::getCosto()const{
    return costo;
}
float CostoImplementos::getImpuesto()const{
    return impuesto;
}
std::string CostoImplementos::getMarca()const{
    return marca;
}
std::string CostoImplementos::getTienda()const{
    return tienda;
}
std::string CostoImplementos::getNombre()const{
    return nombre;
}
CostoImplementos::~CostoImplementos(){
    std::cout<<"...Destruyendo CostoImplementos...\n";
}
#endif