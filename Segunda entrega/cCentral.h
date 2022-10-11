#include "gbl.h"
#include "cLocales.h"
#include "cEncargados.h"

class cCentral
{

public:
	cCentral(string _nombre, string _ubicacion, cLista<cLocales>* Lista, int _codigo, int _cantBarriles);
	virtual ~cCentral();
	cLocales *m_cLocales;
	cEncargados *m_cEncargados;

	int ReponerSolicitado();
	float ContarGanancias();
	bool setSolicitarBarriles();

private:
	int CantBarriles;

};