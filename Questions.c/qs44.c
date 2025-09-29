#include<stdio.h>
 //write a function to calculate the power of a number
 int power(int base, int exponant){
    int result = 1;

    for(int i = 1; i <= exponant; i++){
        result *= base;
    }
    return result;
 }
int main(){
    int x , y;

    //Input base and exponant
    printf("Enter the base(x): ");
    scanf("%d", &x);

    printf("Enter the exponant(y): ");
    scanf("%d", &y);

    //calculate snd display power
    int result = power(x,y);
    printf("%d^%d = %d\n",x,y,result);

    return 0;
}