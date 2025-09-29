#include<stdio.h>

int main(){
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);//read string with spaces

    for(int i = 0; str[i] != '\0'; i++){
        // check if character is lowercase alphabet
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - ('a' - 'A'); //convert to uppercase
        }
    }

    printf("Uppercase string: %s",str);

    return 0;
}