#ifndef _OBRACONSTRUCCION_H_
#define _OBRACONSTRUCCION_H_
#include <iostream>
#include "Obra.h"
#include "CostoCemento.h"
#include "CostoFierro.h"
#include "CostoLadrillos.h"
#include "CostoClavos.h"
#include "CostoTornillos.h"
#include "CostoVentanas.h"
#include "CostoPuertas.h"
class ObraConstruccion : protected Obra{
    private:
        float costoTotal;
        Lista maquinas;
        CostoCemento cemento;
        CostoFierro fierros;
        CostoLadrillos ladrillos;
        Lista herramientas;
        CostoClavos clavos;
        CostoTornillos tornillos;
        CostoVentanas ventanas;
        CostoPuertas puertas;
        Lista muebles;
        Lista implementos;
        Lista personal;
    public:
        ObraConstruccion();
        ~ObraConstruccion();
};
ObraConstruccion::ObraConstruccion(){
}
ObraConstruccion::~ObraConstruccion(){
}
#endif
