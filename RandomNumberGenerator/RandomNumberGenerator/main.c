//
//  main.c
//  RandomNumberGenerator
//
//  Created by Jen McKeon (de Gruchy) on 4/12/13.
//  Copyright (c) 2013 Jen McKeon (de Gruchy). All rights reserved.
//

#include <stdio.h>

int main()
{
	int i, j, k = 6;
    while(1) {		      // infinite loop
        j = rand(k);                         // random number generator function
        //if ( j == 10 ) goto stop;
        k = j % 10;
        printf ("The number you generated is: %i\n", k);
    } // end of while loop
    return (0);
stop: 				// label
	printf( "Jumped to stop\n");
    return (0);
}
