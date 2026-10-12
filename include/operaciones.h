#ifndef ARREGLOS_H
#define ARREGLOS_H

#include <iostream>
#include <string>
#include "utilerias.h"

// =====================================================
// Funciones para trabajar con arreglos de decimales
// =====================================================

// Pide un numero por cada posicion del arreglo y lo guarda.
// El arreglo NO se copia: los valores quedan guardados en el
// arreglo original que se envio desde main.
//
// Recibe: el arreglo que se va a llenar y su tamano.
// Devuelve: nada (void), los datos quedan en el arreglo.
inline void llenarArreglo(double datos[], int tam) {
    for (int i = 0; i < tam; i++) {
        datos[i] = leerDecimal("Escribe el numero " + std::to_string(i + 1) + ": ");
    }
}

// Suma los arreglos a y b posicion por posicion
// y guarda cada resultado en el arreglo total.
//
// Recibe: los arreglos a y b (solo se leen), el arreglo total
//         (aqui se guardan las sumas) y el tamano.
// Devuelve: nada (void), las sumas quedan en total.
inline void sumarArreglos(const double a[], const double b[], double total[], int tam) {
    // TODO: ¿cuantas veces se debe repetir el ciclo?
    // TODO: ¿que posicion de a se suma con que posicion de b?
    // TODO: ¿en que posicion de total se guarda el resultado?
}

// Muestra cada suma con el formato: NUMERO 1 + NUMERO 2 = TOTAL
//
// Recibe: los tres arreglos (solo se leen) y el tamano.
// Devuelve: nada (void), solo imprime.
inline void imprimirSumas(const double a[], const double b[], const double total[], int tam) {
    // TODO: ¿como recorres los tres arreglos con un solo indice?
    // TODO: ¿que se imprime en cada linea?
}

#endif