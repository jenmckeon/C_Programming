//
//  main.c
//  FinalExam_question1-b
//
//  Created by Jen de Gruchy on 5/5/13.
//  Copyright (c) 2013 Jen McKeon (de Gruchy). All rights reserved.
//

#include <stdio.h>

int convert ( int c, int f );

int main()
{
    int f = 0;
    int c;
    
    printf("Enter a value for Celsius, we'll convert it into Fahrenheit.\n");
    scanf("%d", &c);
    printf("If Celsius is: %d,\n", c);
    printf("then the Fahrenheit is: %d.\n", convert (f, c));
    getchar();
}

int convert (int f, int c)
{
   return f = c * (212 - 32)/100 + 32;
}
