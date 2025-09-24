#include<stdio.h>

//Function to count the number of digits in a number
int countDigits(int num){
    int count = 0;
    while(num != 0){
    num /= 10;
    count++;
    }
    return count;
}

//Function to compute the power of number manually
int power(int base, int exp){
    int result = 1;
    for( int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}

//Function if a number is a Armstrong number 
int isArmstrong(int num){
    int originalNumber = num;
    int n = countDigits(num);
    int result = 0; 

    while(num != 0){
        int remainder = num % 10;
        result += power(remainder, n);
        num /= 10;
    }
    return (result == originalNumber);
}


int main(){
  int low = 1, high = 1000; //Define the range in the driver code

  printf("Armstrong numbers between %d and %d are: ", low,high);

  //Interate through each numbers in the interval
  for (int i = low+1 ; i < high; i++)
  {
    if (isArmstrong(i))
    {
       printf("\n %d",i);
    }
}
  
    return 0;
    
}