#include <windows.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	int Sup; //definisco la variabile della superficie
	int G; //definisco la variabile dei giorni
	int Count=1; //definisco la variabile contatore
	int K=1; //definisco un altro contatore
	printf ("Calcolo Della Superficie occupata esponenzialmente \n Inserisci la superficie iniziale:");
	scanf ("%d", &Sup);
	printf ("Inserisci il numero dei giorni");
	scanf ("%d", G);
	while (Count <= G) 
{
		S=S*2;
		Count=Count+1;
		while (K<=S)
		{
			printf ("*");
			K=K+1;
		}
		printf ("\n");
	}
	return 0
}