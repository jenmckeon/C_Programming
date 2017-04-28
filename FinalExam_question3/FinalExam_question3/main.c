

#include <stdio.h>

int gradeBook(int scores[10]){
    int i;
    int avg, sum=0;
    for(i=0;i<3;++i){
        sum+=scores[i];
    }
    avg =(sum/3);
    return avg;
}

int main(){
    
    int grades[10], i, average, total=0;
    
    printf ("This program averages three test scores\n\n");
    
    int gradeBook (int scores[10]);   /* Pass the Array through the function */
    for(i=0; i<3; ++i)
    {
        printf("Enter your grade: ");
        scanf("%i",&grades[i]);
        total+=grades[i];
    }
    average = gradeBook(grades);
    printf("Your test scores are: %i, %i, and %i\n", grades[0], grades[1], grades[2]);
    printf("The Sum of your test scores is: %i\n", total);
    printf("Your average test scores are %i \n",average);
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

