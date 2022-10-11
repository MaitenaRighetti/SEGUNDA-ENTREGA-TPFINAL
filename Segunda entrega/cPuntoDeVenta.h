#include "gbl.h"
#include "cLocales.h"

class cPuntoDeVenta : public cLocales
{

public:
	cPuntoDeVenta(string _nombre, string _ubicacion, cLista<cEmpleados>* listado, int _codigo);
	virtual ~cPuntoDeVenta();

	void SimularClientes();
	void SolicitarCerveza(int Cantidad, string Tipo);
	float ContarLitros();
	float ContarGanancias();
	void EmpleadosP(int Encargados, int Vendedores);
	void TICK(time_t numero);

};
