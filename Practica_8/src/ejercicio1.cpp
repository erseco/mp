﻿/******************************************************************************
 *
 * Metodología de la Programación
 * Grado en Ingeniería Informática
 *
 * 2014 - Ernesto Serrano Collado
 * ------------------------------
 *
 *  Ampliar la clase MiVectorDinamico de datos de tipo TipoBase con los siguientes metodos:
 *
 *  a) Constructor de copia y sobrecarga del operador de asignacion, empleando 
 *      codigo reutilizable.
 *  b) Una sobrecarga alternativa del operador de asignacion, que recibe como 
 *      argumento un dato de tipo TipoBase e inicia todo el vector al valor especificado.
 *  c) Sobregargar el operador [] para que sirva de operador de acceso a los 
 *      elementos del vector dinamico y pueda actuar tanto como lvalue como rvalue.
 *
 ******************************************************************************/
#include <iostream> // Inclusión de los recursos de E/S
#include "MiVectorDinamico.h"

using namespace std;

/*****************************************************************************/
// Programa Principal
int main() {

    // Declaramos un nuevo vector dinamico
    MiVectorDinamico vector1 = MiVectorDinamico();
    
    // Agregamos datos
    vector1.AddValue(1);
    vector1.AddValue(2);
    vector1.AddValue(3);
    vector1.AddValue(4);


    // Declaramos un nuevo vector dinamico y copiamos los datos usando el constructor de copia
    MiVectorDinamico vector2 = vector1;

    
    // Imprimimos los valores
    cout << "Vector copiado:" << endl;
    vector2.PrintValues();


    // Obtenemos el tamaño del vector
    cout << "Tamaño: " << vector2.GetSize() << endl;

    // Obtenemos el tamaño de los utilizados
    cout << "Usados: " << vector2.GetUsed() << endl;


    // Obtenemos un valor
    int pos = 1;
    cout << "Obtenemos el valor de la posicion " << pos << ": " << vector2[pos] << endl;


    // Obtenemos el tipo de redimensionamiento
    cout << "Tipo redimensionamiento (0=1, 1=Doble): " << vector2.GetRedimensionType() << endl;


    // Creamos un nuevo vector usando el constructor de copia
    MiVectorDinamico vector3(vector1);

    // Establecemos un valor
    vector3[0] = 26;

    // Imprimimos los valores
    cout << "Vector 3 creado a partir de vector 1:" << endl;
    vector3.PrintValues();

    // Asignamos un valor a todos los elementos usando el operador de asignacion
    vector2 = 0;

    // Imprimimos los valores
    cout << "Vector 2 asignado a 0:" << endl;
    vector2.PrintValues();

    vector2 = vector3;
    cout << "Vector 3 asignado a vector 2:" << endl;
    vector2.PrintValues();
    


    // Terminamos la ejecución del programa
    return (0);

}