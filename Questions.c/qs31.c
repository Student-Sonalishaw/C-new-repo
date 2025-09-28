#include<stdio.h>
//concatinate two strings without using strcat().
int main (){
    char str1[100] ="Hello, ";
    char str2[] = "World.";

     int i=0, j=0;

     //Find the start of str1
     while (str1[i] != '\0')
     {
        i++;
     }
     //Append str2 to str1
     while (str2[j] != '\0')
     {
        str1[i] = str2[j];
        i++;
        j++;
     }
     str1[i] = '\0';//Null-terminate the result

     printf("Concatinated String: %s\n",str1);
     
     

    return 0;
}