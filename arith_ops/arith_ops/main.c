/* program arith_ops.c */
/* program will demonstrate use of various arithmetic operators */
/* Author: M. Schneider - Date: Feb 2013 */
// Modified: Jen McKeon - Date: Feb 24, 2013

#include <stdio.h>

void main()
{
	int x = 10;	/* declare & init variables */
	int y = 15;
	int z = 20;
	int R;	/* declare resultant variable */
    
	int cnt = 0;  /* declare & init counter */
	
    /* print input operands */
	printf("x = %d  y = %d z = %d\n\n",x,y,z);
    
    /* add operation */
	R = x + y;
	printf("x + y = %10d\n",R);
    
    /* subtract operation */
	R = x - y;
	printf("x - y = %10d\n",R);
	
    /* mult operation */
	R = x * y ;
	printf("x * y = %10d\n",R);
	
    /* div operation */
	R = x / y ;
	printf("x / y = %10d\n",R);
	
    /* FP div operation */
	R = (float)x / (float)y ; /* cast operator */
	printf("(float) x / (float) y = %10f\n",R);
	printf("(float) x / (float) y = %10f\n",              	(float) x / (float) y);
    
    /* presedence */
    
	printf("\nPresedence: + vs * \n");
	R =  z + x * y;	/*Presedence:  * > + 	*/
	printf("z + x * y = %10d\n",R);
	
	R =  (z + x) * y;	/*Presedence:  ( ) > * 	*/
	printf("(z + x) * y = %10d\n",R);
    
	R =  z + x / y;	/*Presedence:  / > + 	*/
	printf("z + x / y = %10d\n",R);
	R =  (z + x) / y;	/*Presedence:  ( ) > / 	*/
	printf("(z + x) / y = %10d\n",R);
	
	printf("\nPresedence: / vs * \n");
	R = y * x / z;
	printf("y * x / z = %10d\n",R);
	R =  x * y / z;
	printf("x * y / z = %10d\n",R);
	R =  x * (y / z);
	printf("x * (y / z) = %8d\n",R);
	R =  x / z * y ;
	printf("x / z * y = %10d\n",R);
	
	
    
    
}



/* 				RESULTS
 make arith_ops
 cc     arith_ops.c   -o arith_ops
 sneezy> !ari
 arith_ops
 x = 10  y = 15 z = 20
 
 x + y =         25
 x - y =         -5
 x * y =        150
 x / y =          0
 (float) x / (float) y =   0.000000
 (float) x / (float) y =   0.666667
 
 Presedence: + vs *
 z + x * y =        170
 (z + x) * y =        450
 z + x / y =         20
 (z + x) / y =          2
 
 Presedence: / vs *
 y * x / z =          7
 x * y / z =          7
 x * (y / z) =        0
 x / z * y =          0
 
 */	


