#ifndef _OBRAREPARACION_H_
#define _OBRAREPARACION_H_
#include <iostream>
#include "Obra.h"
class ObraReparacion : protected Obra{
    private:
        float costoTotal;
        Lista reparaciones;
        Lista personal;
    public:
        ObraReparacion();
        ~ObraReparacion();
};
ObraReparacion::ObraReparacion(){
}
ObraReparacion::~ObraReparacion(){
}
#endif
