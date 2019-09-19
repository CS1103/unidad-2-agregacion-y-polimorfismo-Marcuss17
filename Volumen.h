//
// Created by Eduardo Medina on 19/09/2019.
//

#ifndef UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_VOLUMEN_H
#define UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_VOLUMEN_H

#include <iostream>

class Volumen {
public:
    Volumen() = default;
    std::string nombre;
    std::string numVol;
    Volumen(std::string nombre, std::string numVol);
    virtual void mostrar() = 0;
};


#endif //UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_VOLUMEN_H
