#include "Libro.h"

Libro::Libro(std::string nombre, std::string numVol, int numLibros) : Volumen(nombre,numVol){
    this->numLibros = numLibros;
}

void Libro::mostrar() {
    std::cout << "\n The name of the book is: " << nombre << std::endl;
    std::cout << "\n The number of the volume is: " << numVol << std::endl;
    std::cout <<"\n The number of books,of this type, in the library is: " << numLibros << std::endl;
}

