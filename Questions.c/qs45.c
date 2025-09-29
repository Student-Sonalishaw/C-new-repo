#include<stdio.h>
#include<string.h>

#define MAX 256 //Total ASCII value

int main(){
    char str[1000];
    int freq[MAX] = {0}; //Initialize all frequencies to 0

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); //Read input string(including spaces)

    //count frequency of each character
    for (int i = 0; str[i] != '\0'; i++)
    {
       freq[(unsigned char)str[i]]++; 
    }

    //display character frequencies
    printf("\nCharacter Frequencies: \n");
    for (int i = 0; i < MAX; i++)
    {
        if(freq[i] > 0 && i != '\n'){
            printf("'%c' = %d\n", i, freq[i]);
        }
    }
    
    

    
    return 0;
}