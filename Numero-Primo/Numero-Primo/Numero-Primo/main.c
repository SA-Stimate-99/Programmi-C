//
//  main.c
//  Numero-Primo
//
//  Created by Andrea Cussolotto on 30/04/14.
//  CC - BY - SA
//

#include <stdio.h>

int main(int argc, char **argv)
{
    //Questo è il metodo visto in classe
    
    int num, count, resto, save;
    count=2;
    save=0;
    
    printf("Calcolo numero primo");
    scanf("%d", &num);
    
    if ((num>0)&&(num<2))
    {
        
        printf("E' primo");
        
    }
    
    else
    {
        
        while (count<num)
        {
            
            resto=num%count;
            count++;
            
            if (resto==0)
            {
                save=1;
            }
            
        }
        
    }
    
    if (save==1)
    {
        printf("Non e' primo");
    }
    
    else
    {
        printf("E' Primo");
    }
    
}

