#include<stdio.h>
//Print the adress of a variable using pointers
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int *ptr;
    ptr = &number;
    
    printf("Value of number: %d\n",number);
    printf("Adress of number: %p\n",&number); //adress using & operator
    printf("Adress stored in pointer: %p\n",ptr); //adress via pointer
    printf("Value pointed to by pointer : %d\n",*ptr); //value at the adress



    return 0;
}