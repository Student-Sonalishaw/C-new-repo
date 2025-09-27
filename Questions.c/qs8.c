#include<stdio.h>
//print largest of three numbers
int main(){
    int a, b, c;
    printf("Enter numbers: ");
    scanf("%d %d %d ",&a, &b,&c);
    if(a>b && a>c){
        printf("The largest number is a.");
    } else{
        if(b>c){
            printf("The largest number is b.");
        } else{printf("The largest number is c.");}
    }
    
    return 0;
}