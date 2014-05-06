#include <stdio.h>

int potenza_main (int argc, char** argv) {
	int B;
	int E;
	int C;
	printf ("Scrivi la base");
	scanf ("%d",&B);
	printf("\n Scrivi l'esponente");
	scanf ("%d",&E);
	C=1;
	if (E>=0){

		while (E>0) {
			C=C*B;
			E=E-1;
		}
	}
	else {
		printf ("E' Impossibile!");
	}
	printf ("Il risultato è %d", C);
	return 0;
}