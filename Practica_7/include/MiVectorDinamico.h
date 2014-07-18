/******************************************************************************
 *
 * Metodolog�a de la Programaci�n
 * Grado en Ingenier�a Inform�tica
 *
 * 2014 - Ernesto Serrano Collado
 *
 ******************************************************************************/
#ifndef MIVECTORDINAMICO
#define MIVECTORDINAMICO

typedef int TipoBase;

class MiVectorDinamico {

	//Atributos
private:
	TipoBase * vector;
	int size;
	int pos;
	int dimension_type;

public:
	//Constructores;
	MiVectorDinamico(void);
	MiVectorDinamico(int size, TipoBase defaultvalue = 0);

	//Destructor
	~MiVectorDinamico();

	//M�todos
	void AddValue(TipoBase);
	void PrintValues();

	int GetSize();
	int GetUsed();

	void SetRedimensionType(int type);
	int GetRedimensionType();

	TipoBase GetValue(int pos);

private:
	void Incrementa_En_Uno();
	void Incrementa_En_Doble();
	void Incrementa_En_Bloque(int increment);


};


#endif