//
//  main.c
//  Wk5HW1
//
//  Created by Jen McKeon de Gruchy
//  Copyright (c) 2013 Jen McKeon (de Gruchy). All rights reserved.
//

#include <stdio.h>

int main(void)
{
	int x, y;
	x = 5;
	y = 4;
    
	printf("x = %d y = %d\n",x,y);
    void swap (int *a, int *b);
    {
        int temp;	/* local variable on the stack*/
        
        temp = x;
        x = y;
        y = temp;
    }

	printf("x = %d y = %d\n",x,y);
	return 0;
}



