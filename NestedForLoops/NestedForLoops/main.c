//
//  main.c
//  NestedForLoops
//
//  Created by Jen McKeon (de Gruchy) on 4/12/13.
//  Copyright (c) 2013 Jen McKeon (de Gruchy). All rights reserved.
//

#include <stdio.h>

int main(void)
{

    int n, number, triangularNumber, counter;
    
    for (counter = 1; counter <= 5; ++counter) {
        printf ("What triangular numbr do you want? ");
        scanf("%i", &number);
                                                
        triangularNumber = 0;
        
        for (n = 1; n <= number; ++n)
                triangularNumber += n;
                                                
                printf("Triangular number %i is %i\n\n", number, triangularNumber);
                                                
        }
    return 0;
                                                
}

