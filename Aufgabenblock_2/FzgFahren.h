#pragma once
#include "FzgVerhalten.h"


class FzgFahren :
	public FzgVerhalten
{
public:
	FzgFahren();
	FzgFahren(Weg* weg);
	~FzgFahren();

	double dStrecke(Fahrzeug * fhzg, double dTimeInterval);
};

