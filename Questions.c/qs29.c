#include<stdio.h>
//Find the lenght of a string without using strlen().

int stringLength(const char *str){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length;
}
int main (){
    char str[] = "Hello, world";
    int len = stringLength(str);
    printf("Length of the string: %d\n",len);

    return 0;
}