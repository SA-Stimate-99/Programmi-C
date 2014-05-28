//
//  main.c
//  Tabellina
//
//  Created by Andrea Cussolotto on 28/05/14.
//  CC-BY-SA 2014 Andrea Cussolotto. Few or no rights reserved.
//

/* Legge un numero e
 * ne calcola la tabellina
 * fino al 10*/

 //commento in linea Sigola XD

#include <stdio.h>

#define pi 3,14159265358979 //La firma di AndreK!

int main (int argc, char **argv)
{
	int A; //Dichiariamo la variabile A
	printf ("Scrivi qui un numero di cui calcolare la tabellina. Vietato a CuloCane");
	scanf ("%d",&A); //Leggi A
	int I;
	I = 1;
	while (I<=10)
  {		//mentre I<10
		printf ("%d \n",A*I); //4 debug: scrivi A
		I=I+1;
	}

	return 0;
}
