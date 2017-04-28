#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int grade1, grade2, grade3, sum, average;
    
    // enter three numbers
    printf ("This program averages three numbers using");
    printf(" integer arithmetic\n\n");
    printf("Enter three test scores:\n");
    
    printf("Enter your grade: ");
    scanf("%d", &grade1);
    
    printf("Enter your grade: ");
    scanf("%d", &grade2);
    
    printf("Enter your grade: ");
    scanf("%d",&grade3);
    
    // Print out your grades
    printf("Your Scores are: %i, %i, and %i\n", grade1, grade2, grade3);
    // first the sum of three grades
    sum = grade1 + grade2 + grade3;
    printf("The Sum of your three scores is: %i\n", sum);
    
    // Figure out the average
    average = sum/3;
    printf("Your Average is: %i\n", average);
    
    if (average >= 90) {
        printf("You are an excellent student.\n");
    }
    else if (average >=80) {
        printf("You are an good student.\n");
    }
    else if (average >= 70) {
        printf("You are an average student.\n");
    }
    else if (average >= 60) {
        printf("You are just barely passing, please try harder.\n");
    }
    else {
        printf("You are failing. Please study more and try harder.\n");
    }

    
    return 0;
}