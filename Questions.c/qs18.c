#include<stdio.h>
//Print ASCII value of a character
int main(){
    char ch;
    printf("Enter an character: ");
    scanf("%c",&ch);

    printf("the ASCII value of '%c is: %d\n", ch,ch);

    return 0;
}