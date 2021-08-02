#include <iostream>
#include "maquina.h"
#include "fabrica_maquina.h"

using namespace std;

int main(){

    fabrica* fab=new fabrica_maquina();
    fab->operacionCosto(37);

    delete fab;

    return 0;
}
