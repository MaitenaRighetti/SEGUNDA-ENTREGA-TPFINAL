#include "gbl.h"
#define NMAX 30

template<class T>

class cLista
{

public:
	cLista(unsigned int tamanio = NMAX);
	virtual ~cLista();

	void agregar(T* elemento);
	void eliminar();
	T* quitar();
	void ordenar();
	void operatorMAS();
	void operatorMENOS();
	string To_string();
	void imprimir();

private:
	int CantActual;
	int CantTotal;
	bool CheckEliminar;

};