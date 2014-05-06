#include <stdio.h>

int dtb_main (int argc, char ** argv){
	int A;
	int R;
	
	printf ("Convertitore DEC ---> Bin  \n");
	printf ("Dec = ");
	scanf ("%d", &A);
	while (A>0){
		R=A%2;
		A=A/2;
		printf ("%d", R);
	}
	return 0;
}