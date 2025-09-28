#include<stdio.h>
//copy one string to another without using strcpy().
int main (){
    char source[] = "Hello, World";
    char destination[100];//this could be large enough.

    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';

    printf("Souorce string is: %s\n", source);
    printf("Destination string is: %s\n", destination);
    

    return 0;
}