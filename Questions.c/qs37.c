#include<stdio.h>
//write a function to find the GCD and LCM of two numbers

//Function to find GCD using Euclindean algorithm
int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
//Function to find LCM using GCD
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int num1,num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1,&num2);

   int gcdValue = gcd(num1 , num2);
   int lcmValue = lcm(num1 , num2);

   printf("GCD of %d and %d is: %d\n",num1,num2,gcdValue);
   printf("LCM of %d and %d is: %d\n",num1,num2,lcmValue);


    return 0;
}