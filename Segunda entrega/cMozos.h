#include "gbl.h"
#include "cEmpleados.h"

class cMozos : public cEmpleados
{

public:
	cMozos(float _SalarioPorHora, string _CUIT);
	virtual ~cMozos();

	void LimpiarMesa();
	float Sueldo();
	void GetMesas();
	bool SetEstadoMesas();

};