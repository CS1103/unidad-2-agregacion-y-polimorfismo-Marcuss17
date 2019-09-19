#ifndef UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_REVISTA_H
#define UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_REVISTA_H

#include "Volumen.h"

class Revista : public Volumen{
private:
    int numRevistas;
public:
    Revista(std::string nombre, std::string numVol, int numRevistas);
    void mostrar();
};


#endif //UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_REVISTA_H
