#include "Combo.h"
using namespace std;

Combo::Combo():Producto(){
    clave = 0;
}
Combo::Combo(string _nombre, int _precio, int _peso, int _clave): Producto(_nombre, _precio, _peso){
    clave = _clave;
}
string Combo::str(){
    return Producto::str() + '-' + to_string(clave);
}
int Combo::calculaTotalPagar(){
    int total, descuento;
    total = precio * peso * clave;
    if(clave == 1){
        descuento = (total / 100) * 25;
        return total - descuento;
    }

    else if(clave == 2){
        descuento = (total / 100) * 30;
        return total - descuento;
    }
    
    return total;
}