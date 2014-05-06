/* Legge un numero e 
 * ne calcola la tabellina 
 * fino al 10*/
 
 //commento in linea Sigola XD

#include <stdio.h>

int tabellina_main (int argc, char **argv)
{
	int A; //Dichiariamo la variabile A
	printf ("Scrivi qui un numero di cui calcolare la tabellina. Vietato a CuloCane");
	scanf ("%d",&A); //Leggi A
	int I;
	I = 1;
	if (A==7) {
		printf ("CuloCane, so che sei tu!");
	}
	else {
		while (I<=10) {		//mentre I<10
			printf ("%d \n",A*I); //4 debug: scrivi A
			I=I+1;
		}
	}
	
	return 0;
}
