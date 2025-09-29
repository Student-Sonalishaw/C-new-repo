#include<stdio.h>
// write a Function to check wheter a number is prime
int isPrime(int n){
    if(n<=1){ return 0;} //0 and 1 are not prime

    for(int i = 2; i*i <= n; i++){//check up to sqare(n)
        if(n % i == 0){ return 0;} //divisble, not prime
    }
    return 1;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num)){
        printf("%d is a prime number.\n",num);
    } else{
        printf("%d is not a prime number.\n",num);
    }

    return 0;
}