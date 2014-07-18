/******************************************************************************
 *
 * Metodolog�a de la Programaci�n
 * Grado en Ingenier�a Inform�tica
 *
 * 2014 - Ernesto Serrano Collado
 *
 ******************************************************************************/
#ifndef VECTORDINAMICO
#define VECTORDINAMICO


double * AddValue(double *v, int &pos, int &size, double value);

double * Incrementa_En_Uno(double *v, int &size);
double * Incrementa_En_Doble(double *v, int &size);
double * Incrementa_En_Bloque(double *v, int &size, int increment);

void PrintValues(double *v, int size);

#endif