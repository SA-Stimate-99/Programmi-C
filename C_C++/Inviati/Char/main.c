//
//  main.c
//  helloWorld
//
//  Created by Andrea Cussolotto on 29/11/13.
//  Copyright (c) 2013 Andrea Cussolotto. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char press;
    printf("Si o No?\n");
    scanf("%c",&press);
    if (press=='s'){
        printf("Hello, World!\n");
    }
    else if (press=='n'){
        printf("No\n");
    }
    else {
        printf("Ciao Bepi!\n");
    }
}

