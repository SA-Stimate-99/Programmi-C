/* Questo programma calcolerà il prodotto di un numero
a mezzo somma*/

#include <stdio.h>

int main (int argc, char** argv) {
	int F1; // Variabili: Fattore1
	int F2; // Fattore2
	int P;  // Prodotto
	printf("Programma che calcola il prodotto di due numeri.");
	printf("\n \n Scrivi il primo!");
	scanf ("%d",&F1);
	printf ("\n \n Ora il secondo!");
	scanf ("%d",&F2);
	P=F1;
	
	while (F2>1) {
		P=P+F1;
		F2=F2-1;
	}
	printf ("Il Prodotto e' %d", P);
	return 0;	
}