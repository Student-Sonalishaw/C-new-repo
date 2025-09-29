#include<stdio.h>
#include<string.h>
//write a program to find the first non-reapeting character in a string
#define MAX 256

int main(){
    char str[1000];
    int freq[MAX] = {0}; //Initialize all frequencies to 0

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); //Read input string(including spaces)

    //Remove trailing newline(if any) from fgets input
    str[strcspn(str, "\n")] = '\0';

    //step:1 count frequency of each character
    for (int i = 0; str[i] != '\0'; i++)
    {
       freq[(unsigned char)str[i]]++; 
    }

    //step:2 find first character with frequency 1
    int found = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(freq[(unsigned char)str[i]] == 1){
            printf("First non-repeatinf character: '%c'\n",str[i]);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("No non-repeating character found\n");
    }


    return 0;
}