//
//  main.c
//  wk6prog11-2
//
//  Created by Jen de Gruchy on 5/3/13.
//  Copyright (c) 2013 Jen McKeon (de Gruchy). All rights reserved.
//

#include <stdio.h>

int main()
{
    char c = 'Q';
    char *char_pointer = &c;
    
    printf ("%c %c\n", c, *char_pointer);
    
    c = '/';
    printf ("%c %c\n", c, *char_pointer);
    
    *char_pointer = '(';
    printf ("%c %c\n", c, *char_pointer);
    
    return 0;
}

/* 
 
 Explaination of code
 
 char c was given the value of 'Q'. Then, char char_pointer was defined to be a pointer to char by placing an asterisk infront of char_pointer, like this: *char_pointer. Whatever value is stored inside *char_pointer becomes a pointer to a character. Since the value assigned to *char_pointer was a pointer to the variable c, by applying the address operator (&) to c, *char_pointer was given the value of c which is 'Q'. It was printed out as such.
 
 Next, the variable c was given the value of '/'. Since *char_pointer is equal to &c, then *char_pointer is also equal to '/' and it prints out that way.
 
 Lastly, *char_pointer is given the value of '('. Since *char_pointer is equal to &c, it stands to reason that since *char_pointer = '(', then &c would have a value of '(' as well because of the pointer to c in char_pointer established in the beginning of the program.
 
 */
