#ifndef UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_BIBLIOTECA_H
#define UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_BIBLIOTECA_H
#include "Revista.h"
#include "Libro.h"

class Biblioteca {
private:
    int maxLibros;
    int maxRevistas;
    bool full;
    Volumen* RoL;
public:
    Biblioteca(int maxLibros, int maxRevistas);
    void mostrarBliblioteca();
    bool checkFull();
    void add(bool);
};


#endif //UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MARCUSS17_BIBLIOTECA_H
