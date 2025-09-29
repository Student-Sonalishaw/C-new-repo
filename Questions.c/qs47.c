#include<stdio.h>
//write a program to demostrate call by value and call by reference
void callByValue(int a){
    a = a+10;
    printf("Inside callByValue functioon: a = %d\n",a);
}
//function for call by reference
void callByReference(int *a){
    *a = *a + 10;
    printf("Inside callByReference functioon: a = %d\n",*a);
}
int main(){
    int x = 5;
    printf("Original value of x: %d\n",x);

    //call by value
    callByValue(x);
    printf("After callByValue function: x = %d\n",x); //  x will remain unchanged

    //call by reference
    callByReference(&x);
    printf("After callByReference function: x = %d\n",x); //  x will remain changed


    return 0;
}