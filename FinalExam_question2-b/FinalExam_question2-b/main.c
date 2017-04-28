//
//  main.c
//  AverageTestScores
//
//  Created by Jen McKeon (de Gruchy)
//  Copyright (c) 2013 Jen McKeon (de Gruchy). All rights reserved.
//

#include <stdio.h>

int main(void) {
    int grades[10];  //An array with 10 places
    int i;
    int sum = 0;
    int average = 0;
    
    printf ("This program averages three test scores\n\n");
    //Loops 3 times so that you can enter your test scores into the array 3 times for 3 test scores!
    for ( i = 0; i < 3; i++){
        printf("Enter your grade: ");
        scanf("%d", &grades[i]); //Input test score into the array.
    }
    for (i = 0; i < 3; i++) {
        sum += grades[i]; // Adds all test scores together
    }
    average = sum / 3; // Finds the averages of all 3 test scores
    printf("Your sum of your test scores is %i \n",sum); //Prints out the average
    printf("Your average test scores are %i \n",average); //Prints out the average
    
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