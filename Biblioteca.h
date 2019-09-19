#ifndef UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_BIBLIOTECA_H
#define UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_BIBLIOTECA_H

#include <vector>
#include "Revista.h"
#include "Libro.h"

class Biblioteca {
private:
    int maxLibros;
    int maxRevistas;
    std::vector<Volumen> V1;
public:
    Biblioteca(int maxLibros, int maxRevistas);
    void mostrarBliblioteca();
    void add(bool);
};


#endif //UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_BIBLIOTECA_H
