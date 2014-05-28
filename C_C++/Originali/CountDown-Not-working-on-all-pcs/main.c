//
//  main.c
//  CountDown
//
//  Created by Andrea Cussolotto on 28/05/14.
//  CC-BY-SA 2014 Andrea Cussolotto. Few or no rights reserved.
//

#include <stdio.h>
#include <windows.h>
int main (int argc, char **argv) {
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
