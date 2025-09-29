#include<stdio.h>
//swap two numbers using pointers
//function to swap value
void swap( int *a, int *b){
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 10, y = 20;

    printf("Before swapping: \n");
    printf("x = %d, y = %d\n", x, y);
    //call the swap function,passing adressesbof x and y
    swap(&x, &y);

    printf("After swapping: \n");
    printf("x = %d , y = %d\n", x,y);

    return 0;
}