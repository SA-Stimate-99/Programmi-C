//
//  main.c
//  DecToBin
//
//  Created by Andrea Cussolotto on 28/05/14.
//  CC-BY-SA 2014 Andrea Cussolotto. Few or no rights reserved.
//

#include <stdio.h>

#define pi 3,14159265358979 //La firma di AndreK!


int main (int argc, char ** argv)
{
	int A; //Definisco le variabili
	int R;

	printf ("Convertitore DEC ---> Bin  \n"); //Messaggio di benvenuto
	printf ("Dec = ");
	scanf ("%d", &A); //Lettura del valore
	while (A>0) //While
	{
		R=A%2; //Algoritmo di conversione
		A=A/2;
		printf ("%d", R);
	}
	return 0; //Ritorna il valore di main
}
