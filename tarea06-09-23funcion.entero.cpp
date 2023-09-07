// Tarea 06/09/2023


#include <iostream>
#include <cmath>
bool esEntero (double numero)
{
    return numero == std::floor(numero) && numero==
    std::ceil(numero);
}
using namespace std;

int main()
{
    double numero;
     std:: cout<< "Ingrese un número: ";
    std:: cin >>numero; 
    if (esEntero(numero)){
        std:: cout<< "El número es un entero."<<
    std:: endl;
    } else {
     std:: cout<< "El número no es un entero."<<
    std:: endl;   
    }
    

    return 0;
}
