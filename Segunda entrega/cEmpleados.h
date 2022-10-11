#include "gbl.h"

class cEmpleados
{

public:
	cEmpleados(float _SalarioPorHora, string _CUIT);
	virtual ~cEmpleados();

	virtual time_t Horas_Trabajadas();

private:
	string CUIT;
	int ContarMes;
	float ContarHoras;
	float SalarioPorHora;
	time_t Entrada;
	time_t Salida;

};
