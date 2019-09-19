//
// Created by Eduardo Medina on 19/09/2019.
//

#include "Biblioteca.h"

Biblioteca::Biblioteca(int maxLibros, int maxRevistas) {
    this -> maxLibros = maxLibros;
    this -> maxRevistas = maxRevistas;
}

void Biblioteca::mostrarBliblioteca() {
    std::cout <<"\nThis are the the books and magazines that the library has: \n";
    for(int i = 0; i < V1.size(); i++){
        V1[i].mostrar();
    }
}

bool Biblioteca::checkFull() {
    return false;
}

void Biblioteca::add(bool LoR) {
    std::string name;
    std::string numOfVolume;
    int num;
    if(LoR){
        if(maxLibros <= 0){
            std::cout << "\nNo more space for books.\n";
        }
        else{

            std::cout <<"Enter the name of the book: "; std:: cin >> name;
            std::cout <<"Enter the number of the volume: "; std:: cin >> numOfVolume;
            std::cout <<"Enter the amount of books: "; std::cin >> num;
            Libro L1(name,numOfVolume,num);
            V1.push_back(L1);
            maxLibros -= num;
        }
    }
    else{
        if(maxRevistas <=0){
            std::cout<<"\nNo more space for magazines.\n";
        }
        else{
            std::cout <<"Enter the name of the book: "; std:: cin >> name;
            std::cout <<"Enter the number of the volume: "; std:: cin >> numOfVolume;
            std::cout <<"Enter the amount of books: "; std::cin >> num;
            Revista R1(name,numOfVolume,num);
            V1.push_back(R1);
            maxRevistas -= num;
        }
    }
}

