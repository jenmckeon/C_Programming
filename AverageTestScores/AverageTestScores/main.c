//
//  main.c
//  AverageTestScores
//
//  Created by Jen McKeon (de Gruchy)
//  Copyright (c) 2013 Jen McKeon (de Gruchy). All rights reserved.
//

#include <stdio.h>

int main(void) {
    int grades[10];
    int i;
    int sum = 0;
    int average = 0;
    for ( i = 0; i < 10; i++){ //Loops 10 times so that you can enter your test scores into the array 10 times!
        printf("Enter your grade: ");
        scanf("%d", &grades[i]); //Input test score into the array. 
    }
    for (i = 0; i < 10; i++) {
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