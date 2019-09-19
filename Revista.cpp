//
// Created by Eduardo Medina on 19/09/2019.
//

#include "Revista.h"

Revista::Revista(std::string nombre, std::string numVol, int numRevistas) : Volumen(nombre, numVol){
    this -> numRevistas = numRevistas;
}

void Revista::mostrar() {
    std::cout << "\n The name of the magazine is: " << nombre << std::endl;
    std::cout << "\n The number of the volume is: " << numVol << std::endl;
    std::cout <<"\n The number of magazines, of this type, in the library is: " << numRevistas << std::endl;
}

