#include<stdio.h>
#include<string.h>
//check if a number string is palindrome or not
int main (){
    char s[1000];
    printf("Enter an number: ");
    scanf("%s",s);
    int j = strlen(s) - 1, isPal = 1;
    for(int i = 0; i < j; i++, j--){ 
        if(s[i] != s[j]) { isPal = 0; break; }
    }
    printf(isPal ? "It's an Palindrome\n" : "It's Not an Palindrome\n");

    return 0;
}