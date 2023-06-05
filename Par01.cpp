// Par01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Función para asignar un valor V en la posición X del arreglo
void asignarValor(int* arreglo, int posicion, int valor) {
    arreglo[posicion] = valor;
}

// Función para acceder al elemento en la posición solicitada del arreglo
int accederElemento(const int* arreglo, int posicion) {
    return arreglo[posicion];
}

int main() {
    // Definir el raw array inicial
    int arreglo[] = { 0,1, 2, 3, 4, 5,6,7,8,9,10 };

    // Solicitar la posición y el valor al usuario
    int posicion, valor;
    std::cout << "Ingrese la posicion: ";
    std::cin >> posicion;
    std::cout << "Ingrese el valor: ";
    std::cin >> valor;

    // Asignar el valor V en la posición X
    asignarValor(arreglo, posicion, valor);

    // Acceder al elemento en la posición solicitada
    int elemento = accederElemento(arreglo, posicion);

    // Imprimir el arreglo actualizado y el elemento asignado
    std::cout << "\nArreglo actualizado: ";
    for (int i = 0; i < sizeof(arreglo) / sizeof(arreglo[0]); i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Elemento en la posicion " << posicion << ": " << elemento << std::endl;

    return 0;
}