#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>
using namespace std;

class producto {
    protected:
        float costo;
        float impuesto;
        string marca;
        string tienda;
        string nombre;
    public:
        producto(){}
        virtual void setCosto(float)= 0;
        void setImpuesto(float);
        void setMarca(std::string);
        void setTienda(std::string);
        void setNombre(std::string);
        virtual float getCosto()= 0;
        float getImpuesto()const;
        std::string getMarca()const;
        std::string getTienda()const;
        std::string getNombre()const;
        ~producto(){}
};


#endif // PRODUCTO_H
