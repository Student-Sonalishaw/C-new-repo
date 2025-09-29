#include<stdio.h>
//write a program to find the lenght of a string using pointers
int main(){
    char str[100];
    char *ptr ;
    int length = 0;

    printf("Enter a string: ");
    fgets(str,sizeof(str), stdin);//read string with spaces

    ptr = str;//point to start of a string

    while(*ptr != '\0'){
        length++;
        ptr++;
    } 

    //if using fgets, we might want to exclude the newline character
    if(length > 0 && str[length-1] == '\n'){
        length--; //exclude newline
    }

    printf("Length of the string: %d\n",length);
    
    return 0;
    
}