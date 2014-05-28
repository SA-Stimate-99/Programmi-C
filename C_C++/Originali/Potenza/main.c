//
//  main.c
//  Potenza
//
//  Created by Andrea Cussolotto on 28/05/14.
//  CC-BY-SA 2014 Andrea Cussolotto. Few or no rights reserved.
//

#include <stdio.h>

int main (int argc, char** argv)
{
	int B; //Definisco le variabili
	int E;
	int C;
	printf ("Scrivi la base");
	scanf ("%d",&B);
	printf("\n Scrivi l'esponente");
	scanf ("%d",&E);
	C=1;
	if (E>=0){

		while (E>0) {
			C=C*B; //Calcolo
			E=E-1;
		}
	}
	else {
		printf ("E' Impossibile!");
	}
	printf ("Il risultato è %d", C);
	return 0;
}
