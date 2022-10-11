#include "gbl.h"
#include "cLocales.h"

class cBar : public cLocales
{

public:
	cBar(string _nombre, string _ubicacion, cLista<cEmpleados>* listado, int _codigo, int _mesas);
	virtual ~cBar();

	void SimularClientes();
	void SolicitarCerveza(int Cantidad, string Tipo);
	float ContarLitros();
	float ContarGanancias();
	void EmpleadosB(int Encargados, int Meseros, int Vendedores);
	void TICK(time_t numero);

private:
	int Mesas;
	bool EstadoMesas;

};