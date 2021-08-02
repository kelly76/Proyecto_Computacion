#ifndef _COSTOHERRAMIENTAS_H_
#define _COSTOHERRAMIENTAS_H_
#include <iostream>
class CostoHerramientas{
    private:
        float costo;
        std::string marca;
        std::string tienda;
        float impuesto;
        std::string nombre;
    public:
        CostoHerramientas();
        CostoHerramientas(float,std::string,std::string,std::string);
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
        ~CostoHerramientas();
};
CostoHerramientas::CostoHerramientas(){
    costo=0;
    marca="No definida";
    tienda="No definida";
    impuesto=0.18*costo;
    nombre="No definido";
}
CostoHerramientas::CostoHerramientas(float costo, std::string marca, std::string tienda, std::string nombre){
    this->costo=costo;
    this->nombre=nombre;
    this->marca=marca;
    this->tienda=tienda;
    impuesto=0.18*costo;
}
void CostoHerramientas::setCosto(float costo){
    this->costo = costo;
}
void CostoHerramientas::setImpuesto(float impuesto){
    this->impuesto = impuesto;
}
void CostoHerramientas::setMarca(std::string marca){
    this->marca=marca;
}
void CostoHerramientas::setTienda(std::string tienda){
    this->tienda = tienda;
}
void CostoHerramientas::setNombre(std::string nombre){
    this->nombre = nombre;
}
float CostoHerramientas::getCosto()const{
    return costo;
}
float CostoHerramientas::getImpuesto()const{
    return impuesto;
}
std::string CostoHerramientas::getMarca()const{
    return marca;
}
std::string CostoHerramientas::getTienda()const{
    return tienda;
}
std::string CostoHerramientas::getNombre()const{
    return nombre;
}
CostoHerramientas::~CostoHerramientas(){
    std::cout<<"...Destruyendo CostoHerramientas...\n";
}
#endif