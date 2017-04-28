//
//  main.c
//  AverageTestScores
//
//  Created by Jen McKeon (de Gruchy)
//  Copyright (c) 2013 Jen McKeon (de Gruchy). All rights reserved.
//

#include <stdio.h>

int main(void) {
    int gradeArray;
    int i;
    int sum = 0;
    int average = 0;
    
    //This proves that one can set the array length in the program, and it does not need to be determined at compile time.
    printf("Set the amount of grades to average out (between 1 - 10): ");
    scanf("%i", &gradeArray); 
    
    //This part of the program sets boundaries between 0 and 10. If you choose a number larger than 10, you're out of bounds
    //If you're out of bounds, the program will output the printf statement that I've written and the program will end.
    if (gradeArray < 0 || gradeArray > 10) {
        printf("I am sorry, but it looks like you're out of bounds. I cannot process your grades. Do not pass go, do not collect $200");
        return 1;
    }
    
    unsigned long long int grades[gradeArray];
    
    for ( i = 0; i < gradeArray; i++){ //Loops as many times as you set during runtime
        printf("Enter your grade: ");
        scanf("%d", &grades[i]); //Input test score into the array.
    }
    for (i = 0; i < gradeArray; i++) {
        sum += grades[i]; // Adds all test scores together
    }
    average = sum / 10; // Finds the averages of all 10 test scores
    printf("%d\n", average); // Prints out the average.
    
    if (average >= 90) {
        printf("Jen is an excellent student.\n");
    }
    else if (average >=80) {
        printf("Jen is an good student.\n");
    }
    else if (average >= 70) {
        printf("Jen is an average student.\n");
    }
    else if (average >= 60) {
        printf("Jen is an average student.\n");
    }
    else {
        printf("Jen is a failing student. She really needs to study more and try harder.\n");
    }
    
    return 0;
    
}