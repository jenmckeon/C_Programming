//
//  main.c
//  FinalExam_question1-a
//
//  Created by Jen de Gruchy on 5/5/13.
//  Copyright (c) 2013 Jen McKeon (de Gruchy). All rights reserved.
//

#include <stdio.h>

int main(void)
{

    int f;
    int c;
    
    printf("Enter a value for Celsius, we'll convert it into Fahrenheit.\n");
    scanf("%d", &c);
    
    f = c * (212 - 32)/100 + 32;
    
    printf("If Celsius is: %d,\n", c);
    printf("then the Fahrenheit is: %d.\n", f);
    return 0;
}

