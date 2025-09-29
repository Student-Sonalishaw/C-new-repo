#include<stdio.h>
#include<string.h>
//check if a string is a palindrome.(palindrome = original and reverse is same)
int main(){
    char str[1000];
    int flag = 0;
    printf("Enter a string: ");
    scanf("%s",&str);

    int len = strlen(str);

    for(int i = 0; i < len/2; i++){
        if(str[i] != str[len-i-1]){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("The string is a palindrome.\n");
    } else{
        printf("The string is not a palindrome.\n");
    }



    return 0;
}
