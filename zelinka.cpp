#include "zelinka.h"
#include <stdio.h>

int prunik(double zacatek1, double konec1, double zacatek2, double konec2, double* vysl_zacatek, double* vysl_konec) {
	double temp = NULL;

	if (zacatek1 > konec1) {
		temp = zacatek1;
		zacatek1 = konec1;
		konec1 = temp;
		temp = NULL;
	}
	if (zacatek2 > konec2) {
		temp = zacatek2;
		zacatek2 = konec2;
		konec2 = temp;
		temp = NULL;
	}

	if (zacatek1 <= zacatek2 && zacatek2 <= konec1 && konec1 <= konec2) {
		*vysl_zacatek = zacatek2;
		*vysl_konec = konec1;
		//printf("tady - 1");
		return 1;
	}
	else if (zacatek1 >= zacatek2 && zacatek1 <= konec2 && konec1 >= konec2) {
		*vysl_zacatek = zacatek1;
		*vysl_konec = konec2;
		//printf("tady - 2");
		return 1;
	}
	else if (zacatek1 <= zacatek2 && konec1 >= konec2) {
		*vysl_zacatek = zacatek2;
		*vysl_konec = konec2;
		//printf("tady - 3");
		return 1;
	}
	else if (zacatek1 >= zacatek2 && konec1 <= konec2) {
		*vysl_zacatek = zacatek1;
		*vysl_konec = konec1;
		//printf("tady - 4");
		return 1;
	}
	else
	{
		return 0;
	}
}