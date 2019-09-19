#include <iostream>
#include "Revista.h"
#include "Biblioteca.h"
#include "Libro.h"
int main() {
    bool LoR;
    int maxBooks, maxMaga;
    std::cout <<"\nHow many books should the library support? \n"; std::cin >> maxBooks;
    std::cout <<"\nHow many magazines should the library support? \n"; std::cin >> maxMaga;
    Biblioteca B1(maxBooks,maxMaga);
    std::cout <<"\nYou wish to add a book or a magazine?\n"; std::cin >> LoR;
    B1.add(LoR);
    std::cout <<"\nYou wish to add a book or a magazine?\n"; std::cin >> LoR;
    B1.add(LoR);
    B1.mostrarBliblioteca();

    return 0;
}