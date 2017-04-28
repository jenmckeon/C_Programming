//
//  main.c
//  wk6prog11-1
//
//  Created by Jen de Gruchy.
//  Copyright (c) 2013 Jen McKeon (de Gruchy). All rights reserved.
//

#include <stdio.h>

int main(void)
{
    /* Three integer variables are defined: count, x and int_pointer. Count is given the value of 10. *int_pointer is going to enable us to indirectly access the value of count because we added an asterisk in front of its name. The asterisk (indirection operator) tells the system that the variable int_pointer is a type of pointer so that it can access the value of one (or more integers. */
    int count = 10, x, *int_pointer;
    
    /* The & operator is known as the address operator. by putting an address operator in front of count as &count, you can then assign it to any pointer variable. So, int_pointer = &count; sets up an indirect reference between the variables count and int_pointer. This means that since count = 10 and int_pointer = &count, then *int_pointer = 10 because int_pointer accessed the data from count. Since x = *int_pointer, it stands to reason that x = 10, because x indirectly got the data from count. */
    int_pointer = &count;
    x = *int_pointer;
    
    /* The Output is count = 10, x = 10. Thus, proving my explanation from above */
    printf ("count = %i, x = %i\n", count, x);
    
    return 0;
}

