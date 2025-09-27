#include<stdio.h>
//sum of entered number digits
int main(){
    int n, sum = 0;
    printf("Enter an number: ");
    scanf("%d",&n);

    n = n<0 ? -n : n;

    while(n>0){
        sum += n%10;
        n/=10;
    }

    printf("%d\n",sum);

    return 0;
}

