#include <iostream>
#include "Persona.h"
using namespace std;
int main(){
    Persona p1;
    Persona p2("Peruano","Josthin Alberto","Pilco Flores",23,72503350);
    Persona p3("Peruano","Josthin Alberto","Pilco Flores",23,72503350,2500.8,"Científico de la Computación",true);
    cout<<p1.getOcupacion()<<endl;
    cout<<p2.getNombre()<<endl;
    cout<<p3.getSueldo()<<endl;
    return 0;
}