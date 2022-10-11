#include "gbl.h"
#include "cLista.h"
#include "cEmpleados.h"

class cLocales
{

public:
	cLocales(string _nombre, string _numero, string _ubicacion, int _stock, int _codigo);
	virtual ~cLocales();
	cEmpleados *m_cEmpleados;

	bool AbriryCerrar();
	virtual float ContarLitros();
	virtual float ContarGanancias();
	virtual void SolicitarCerveza(int Cantidad, string Tipo);
	virtual void imprimir();
	string To_string();

private:
	string Nombre;
	string Numero;
	string Ubicacion;
	int stock;
	float Ganancias;
	int Codigo;
	float CantLitrosVendidos;
	float DineroTotal;
	cLista<cEmpleados>* ListaDeEmpleados;

};