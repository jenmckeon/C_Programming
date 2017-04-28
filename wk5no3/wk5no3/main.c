#include <stdio.h>
int gradeBook(int scores[], int gradeArray){
    int i;
    int avg, sum=0;
    for(i=0;i<gradeArray;++i){
        sum+=scores[i];
    }
    avg =(sum/gradeArray);
    return avg;
}
int main(){
    int gradeArray;
    printf("Set the amount of grades to average out (between 1 - 10): ");
    scanf("%i", &gradeArray);
    
    //This part of the program sets boundaries between 0 and 10. If you choose a number larger than 10, you're out of bounds
    //If you're out of bounds, the program will output the printf statement that I've written and the program will end.
    if (gradeArray < 0 || gradeArray > 10) {
        printf("I am sorry, but it looks like you're out of bounds. I cannot process your grades. Do not pass go, do not collect $200");
        return 1;
    }

    int grades[gradeArray], i, average;
    
    int gradeBook (int scores[], int gradeArray);   /* Pass the Array through the function */
    for(i=0; i<gradeArray; ++i)
    {
        printf("Enter score: ");
        scanf("%i",&grades[i]);
    }
    average = gradeBook(grades, gradeArray);
    printf("Average test scores are %i \n",average);
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

