#include<stdio.h>
//print grade of a student marks 
int main(){
    int marks;
    printf("Enter marks(0-100): ");
    scanf("%d",&marks);

    if(marks >= 0 && marks <= 100){
         if(marks >= 90){
            printf("Your grade is: A\n");
        }
         if(marks >= 75 && marks < 90){
            printf("Your grade is: B\n");
        }
         if(marks >= 50 && marks < 75){
            printf("Your grade is: C\n");
        }
         if(marks >= 25 && marks < 50){
            printf("Your grade is: D\n");
        } 
        else{printf("You are bellow the grade.");}
    } 
    return 0;
}