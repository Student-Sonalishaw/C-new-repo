#include<stdio.h>
// convert a string to lowercase without using library functions.
int main(){
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);//read string with spaces

    for(int i = 0; str[i] != '\0'; i++){
        // check if character is uppercase alphabet
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + ('a' - 'A'); //convert to lowercase
        }
    }

    printf("Uppercase string: %s",str);

    return 0;
}
