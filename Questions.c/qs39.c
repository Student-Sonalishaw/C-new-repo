#include<stdio.h>
//write a function to calculate factorial of a number
// I am using recursion to solve this
long long factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } else {return n*factorial(n-1);}
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num<0){
        printf("Factorial is not defined for negative numbers.\n");
    } else{
        printf("Factorial is of %d is %lld\n",num,factorial(num));
    }

    return 0;
}