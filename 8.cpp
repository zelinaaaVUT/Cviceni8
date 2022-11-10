// 8.cpp : Defines the entry point for the application.
//

#include "8.h"
#include "zelinka.h"


using namespace std;

int main()
{
	double x1;
	double x2;
	double y1;
	double y2;
	double vysl_zacatek;
	double vysl_konec;

	int p;

	printf("Zadej u 1. vektoru: ");
	scanf(" %lf", &x1);
	printf("Zadej v 1. vektoru: ");
	scanf(" %lf", &x2);
	printf("Zadej u 2. vektoru: ");
	scanf(" %lf", &y1);
	printf("Zadej v 2. vektoru: ");
	scanf(" %lf", &y2);

	p = prunik(x1, x2, y1, y2, &vysl_zacatek, &vysl_konec);

	if (p == 0) {
		printf("Nema prunik");
	}
	else {
		printf("Prunik je v bodech v intervalu: (%lf, %lf)", vysl_zacatek, vysl_konec);
	}


	return 0;
}
