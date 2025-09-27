#include<stdio.h>
//Print sum of n natural numbers
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int sum=0;
    for(int i =1; i<=n; i++){
        sum+=i;
    }
    printf("The total sum is: %d\n",sum);

    return 0;
}