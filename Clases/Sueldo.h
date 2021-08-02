#ifndef _SUELDO_H_
#define _SUELDO_H_
#include <iostream>
class Sueldo{
    private:
        float sueldo;
        std::string ocupacion;
        bool civil;
    public:
        Sueldo();
        Sueldo(float,std::string,bool);
        void setSueldo(float);
        void setOcupacion(std::string);
        void setCivil(bool);
        float getSueldo()const;
        std::string getOcupacion()const;
        bool getCivil()const;
        Sueldo& operator=(Sueldo a){
            sueldo = a.sueldo;
            ocupacion = a.ocupacion;
            civil = a.civil;
            return *this;
        }
        ~Sueldo();
};
Sueldo::Sueldo(){
    sueldo=0;
    ocupacion="No especificada";
    civil=true;
}
Sueldo::Sueldo(float sueldo, std::string ocupacion, bool civil){
    this->sueldo = sueldo;
    this->ocupacion = ocupacion;
    this->civil = civil;
}
void Sueldo::setSueldo(float sueldo){
    this->sueldo = sueldo;
}
void Sueldo::setOcupacion(std::string ocupacion){
    this->ocupacion = ocupacion;
}
void Sueldo::setCivil(bool civil){
    this->civil = civil;
}
float Sueldo::getSueldo()const{
    return sueldo;
}
std::string Sueldo::getOcupacion()const{
    return ocupacion;
}
bool Sueldo::getCivil()const{
    return civil;
}
Sueldo::~Sueldo(){
    std::cout<<"...Destruyendo Sueldo...\n";
}
#endif
