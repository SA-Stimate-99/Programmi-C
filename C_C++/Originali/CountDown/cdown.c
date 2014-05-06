#include <stdio.h>
#include <windows.h>
int cdown_main (int argc, char **argv) {
	int numero;
	
	printf("Questo programma farà il countdown a partire da un numero \n \n ");
	printf("Scrivi qui il numero!   ");
	scanf ("%d", &numero);
	
	while (numero>=0) {
		Sleep(500);
		printf ("%d \n", numero);
		numero=numero-1;
	}
	printf ("\n haha, scherzavo XD :asd:");
	return 0;
}