//
//  IntAverage - average 3 numbers using integer arithmetic.
//               First add the sum of each number divided by 3
//               and second divide the sum of the three
//               numbers by 3.
//
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int nValue1;
    int nValue2;
    int nValue3;
    
    
    // enter three numbers
    printf ("This program averages three numbers using");
    printf(" integer arithmetic\n\n");
    printf("Enter three integers:\n");
    
    printf("n1 - ");
    scanf("%d", &nValue1);
    
    printf("n2 - ");
    scanf("%d", &nValue2);
    
    printf("n3 - ");
    scanf("%d",&nValue3);
    
    // first the sum of three ratios
    printf("n1/3 + n2/3 + n3/3 = %i\n", nValue1 / 3 + nValue2 / 3 + nValue3 / 3);
    
    // now the ratio of three sums
    printf("(n1 + n2 + n3)/3 = %i\n", (nValue1 + nValue2 + nValue3) / 3);
    
    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}

    
    