#include <iostream>
#include "arreglos.h"

int main() {
    const int TAM = 3;
    double a[TAM], b[TAM], total[TAM];

    std::cout << "Llenando el arreglo A:\n";
    llenarArreglo(a, TAM);

    std::cout << "\nLlenando el arreglo B:\n";
    llenarArreglo(b, TAM);

    sumarArreglos(a, b, total, TAM);

    std::cout << "\nResultados de las sumas:\n";
    imprimirSumas(a, b, total, TAM);

    return 0;
}