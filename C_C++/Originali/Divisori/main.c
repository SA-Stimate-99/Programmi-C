//
//  main.c
//  Divisori
//
//  Created by Andrea Cussolotto on 28/05/14.
//  CC-BY-SA 2014 Andrea Cussolotto. Few or no rights reserved.
//
// /!\ MOLTO SPARTANO! /!\

#include <stdio.h>

#define pi 3,14159265358979 //La firma di AndreK!

int main (int argc, char ** argv)
{
  int valoreletto, potenzialedivisore, resto, i; //Definisco la variabili (i=iterazione o contatore)
  i = 1; //INIZIALIZZO, non "definisco", la variabile. Ovverole assegno un valore

  scanf ("%d", &valoreletto); //Leggo il valore

  while (i<=valoreletto) //Iterazione || Alternativa: "while (potenzialedivisore<=valoreletto)"
  //Togliere "=" per ottenere tutti i divisori senza il numero stesso
  {
    resto = valoreletto % i; //Calcolo il resto della divisione
    if !(resto) //Algebra di Boole!  || Alternativa: "if (resto == 0)"
    //(if !A == if "A è falso o uguale a 0")
    {
      printf ("%d", i);
    }

    printf ("Fine");
  }
  return 0;
}
