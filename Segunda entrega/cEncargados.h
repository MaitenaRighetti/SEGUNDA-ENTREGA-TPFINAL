#include "gbl.h"
#include "cEmpleados.h"

class cEncargados : public cEmpleados
{

public:
	cEncargados(float _SalarioPorHora, string _CUIT);
	virtual ~cEncargados();

	bool VerificarBarriles();
	float Sueldo();
	void GetCantBarriles();
	bool SolicitarBarriles();

};
