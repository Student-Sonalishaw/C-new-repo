#include<stdio.h>
// enter an array size n and print all the elements reversed
int main(){
    int n;
    printf("Enter thye size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements: \n",n);
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("The reversed array: \n");
    for(int i = n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
    
}