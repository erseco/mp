/*********************************************************************/
// METODOLOG�A DE LA PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2013-2014
// (C) FRANCISCO JOS� CORTIJO BON
// DEPARTAMENTO DE CIENCIAS DE LA COMPUTACI�N E INTELIGENCIA ARTIFICIAL
//
// PR�CTICA 1 
// 
/*	
	Demostraci�n del uso de ficheros de cabecera y de biblioteca
*/
/*********************************************************************/

#include <iostream>
#include "utils.h"

using namespace std;

/*********************************************************************/
/*********************************************************************/

int main()
{   
	int dividendo, divisor; 

	cout << "Introduce dividendo (terminar con un negativo) --> "; 
	cin >> dividendo; 
	// Solo se pide el divisor si el dividendo es v�lido
	if (dividendo >= 0) {
		cout << "Introduce divisor (terminar con un negativo) --> "; 
		cin >> divisor; 
	}

	while ((dividendo>=0) && (divisor>=0)) {

		cout << "\tLa divisi�n entera es = "; 
		cout << DivisionEntera (dividendo, divisor) << endl;

		cout << "\tEl resto de la divisi�n es = "; 
		cout << RestoDivision (dividendo, divisor) << endl;

		cout << endl;

		cout << "Introduce dividendo (terminar con un negativo) --> "; 
		cin >> dividendo; 
		// Solo se pide el divisor si el dividendo es v�lido
		if (dividendo >= 0) {
			cout << "Introduce divisor (terminar con un negativo) --> "; 
			cin >> divisor; 
		}

	} // while ((dividendo>=0) && (divisor>=0)) 

	cout << "\n\n";

	return (0);
}

/*********************************************************************/
/*********************************************************************/
