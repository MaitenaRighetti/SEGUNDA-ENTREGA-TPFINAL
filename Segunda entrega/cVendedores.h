#include "gbl.h"
#include "cEmpleados.h"

class cVendedores : public cEmpleados
{

public:
	cVendedores(float _SalarioPorHora, string _CUIT);
	virtual ~cVendedores();

	float Sueldo();

};