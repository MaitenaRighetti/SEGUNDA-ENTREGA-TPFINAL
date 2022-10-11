#include <iostream>
#include "gbl.h"

#include "cBar.h"
#include "cCentral.h"
#include "cEmpleados.h"
#include "cEncargados.h"
#include "cLista.h"
#include "cLocales.h"
#include "cMozos.h"
#include "cPuntoDeVenta.h"
#include "cVendedores.h"

int main(void) {
	// Hacemos un randomizador segun el momento en el que se ejecute el programa
	// Asi siempre es diferente
	srand(time(NULL));

	// Creamos una lista de empleados para el bar (donde se incluirian los 3 tipos que hay)
	cLista<cEmpleados>* ListaEmpleados1 = new cLista<cEmpleados>(5);
	cEncargados* Enc1 = new cEncargados(1200, "QWER1");
	cVendedores* Vend1 = new cVendedores(800, "SMN21");
	cVendedores* Vend2 = new cVendedores(850, "VRS60");
	cMozos* Mozo1 = new cMozos(750, "LOK48");
	cMozos* Mozo2 = new cMozos(650, "666DM");

	// Creamos una lista de empleados para el punto de venta 
	cLista<cEmpleados>* ListaEmpleados2 = new cLista<cEmpleados>(3);
	cEncargados* Enc2 = new cEncargados(1500, "ABC33");
	cVendedores* Vend3 = new cVendedores(900, "SDF34");
	cVendedores* Vend4 = new cVendedores(900, "LOK56");
	

	// Agregamos a la lista de empleados los objetos recien creados (BAR)
	ListaEmpleados1->agregar(Enc1);
	ListaEmpleados1->agregar(Vend1);
	ListaEmpleados1->agregar(Vend2);
	ListaEmpleados1->agregar(Mozo1);
	ListaEmpleados1->agregar(Mozo2); //falta agregar las mesas

	// Agregamos a la lista de empleados los objetos recien creados (PUNTO DE VENTA)
	ListaEmpleados2->agregar(Enc2);
	ListaEmpleados2->agregar(Vend3);
	ListaEmpleados2->agregar(Vend4);


	// Creamos el listado de locales (en este caso 2)
	cLista<cLocales>* ListaLocales = new cLista<cLocales>(2);
	cBar* Bar1 = new cBar("AAAAA", "Caronti 555", ListaEmpleados1, 500, 30);
	cPuntoDeVenta* Punto1 = new cPuntoDeVenta("Punto1", "Armenia 876", ListaEmpleados2, 123);

	// Agregamos el local a mi lista de locales
	// (nos tira un error, no sabemos por que)
	(*ListaLocales) + Bar1;
	(*ListaLocales) + Punto1;

	// Creaamos la central de la cadena de cervecerias
	cCentral* Central = new cCentral("CENTRAL","Alem 100",ListaLocales,1,500);

	// Esta es una version "corta" de lo que seria el main final
	// En un futuro agregariamos mas casos, la mayoria de los que se podrian presentar
	// Pero entregamos esto para poder ver si estamos orientados correctamente
	return 0;
}