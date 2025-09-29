#include<stdio.h>
//Write a function to genarate the fibonacci series
void fibonacci(int n){
    int a = 0, b = 1, next;

    if(n <= 0){
        printf("Enter a positive number.\n");
        return;
    }
    printf("Fibonacci series: ");

    for(int i = 0; i < n; i++){
        printf("%d ",a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main(){
    int terms;

    printf("Enter the number of terms: ");
    if(scanf("%d", &terms) != 1){
        printf("Invalid input!\n");
        return 1;
    }

    fibonacci(terms); //call the function

    return 0;
}