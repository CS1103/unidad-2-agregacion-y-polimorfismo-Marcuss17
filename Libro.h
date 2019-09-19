#ifndef UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_LIBRO_H
#define UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_LIBRO_H

#include "Volumen.h"

class Libro : public Volumen {
private:
    int numLibros;
public:
    Libro(std::string nombre, std::string numVol,int numLibros);
    void mostrar() override;
};


#endif //UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_LIBRO_H
