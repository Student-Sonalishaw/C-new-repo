#include<stdio.h>
//print the size of int,char,float,double
int main(){
    printf("The size of int: %zu bytes\n ", sizeof(int));//%zu of size returned size sizeof 
    printf("The size of float: %zu bytes\n ", sizeof(float));
    printf("The size of char: %zu bytes\n ", sizeof(char));
    printf("The size of double: %zu bytes\n ", sizeof(double));

    return 0;
}