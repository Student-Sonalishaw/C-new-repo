#include<stdio.h>
//print reversed of entered number
int main(){
    int num, remainder,reversed=0;
    printf("Enter an number: ");
    scanf("%d",&num);

    while(num != 0){
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    printf("Reversed of entered number is: %d\n",reversed);

    return 0;
}