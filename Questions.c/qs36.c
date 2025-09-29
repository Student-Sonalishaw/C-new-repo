#include<stdio.h>
//count the number of words in a string
int main(){
    char str[200];
    int wordCount = 0;
    int inWord = 0; //flag to indicate if we are inside a word

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){
        //if current characater is not space or newline, we are inside a word
        if(str[i] != ' '&& str[i] != '\n' && str[i] != '\t'){
            if(!inWord){
                inWord = 1;
                wordCount++;//count the start of a new word
            } else{
                inWord = 0;//we are outside a word
            }
        }
    }

    printf("Number of words: %d\n",wordCount);


    return 0;
}