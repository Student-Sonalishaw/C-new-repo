#include<stdio.h>
//print an table of a number by using loop
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
       printf("The table of entered number is %d*%d= %d\n",n,i,n*i);
    }
    

    return 0;
}