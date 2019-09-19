//
// Created by Eduardo Medina on 19/09/2019.
//

#include "Biblioteca.h"

Biblioteca::Biblioteca(int maxLibros, int maxRevistas) {
    this -> maxLibros = maxLibros;
    this -> maxRevistas = maxRevistas;
    RoL = nullptr;
}

void Biblioteca::mostrarBliblioteca() {

}

bool Biblioteca::checkFull() {
    return false;
}

void Biblioteca::add(bool LoR) {
    if(LoR){
        if(maxLibros <= 0){
            std::cout << "\nNo more space for books.\n";
        }
        else{
            std::string nameOftheBook;
            std::string numOfVolume;
            int numOfBooks;
            std::cout <<"Enter the name of the book: "; std:: cin >> nameOftheBook;
            std::cout <<"Enter the number of the volume: "; std:: cin >> numOfVolume;
            std::cout <<"Enter the amount of books: "; std::cin >> numOfBooks;
            RoL = new Libro(nameOftheBook,numOfVolume,numOfBooks);
            maxLibros -= numOfBooks;
        }
    }
    else{
        if(maxRevistas <=0){
            std::cout<<"\nNo more space for magazines.\n";
        }
        else{
            std::string nameOfMagazine;
            std::string numOfVol;
            int numOfMagazine;
            std::cout <<"Enter the name of the book: "; std:: cin >> nameOfMagazine;
            std::cout <<"Enter the number of the volume: "; std:: cin >> numOfVol;
            std::cout <<"Enter the amount of books: "; std::cin >> numOfMagazine;
            RoL = new Revista(nameOfMagazine,numOfVol,numOfMagazine);
            maxRevistas -= numOfMagazine;
        }
    }
}

