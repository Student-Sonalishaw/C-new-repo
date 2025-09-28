#include<stdio.h>
// enter an array size n and print all the elements
int main(){
    int n;
    printf("Enter thye size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements: \n",n);
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("The elements of the array are: \n");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
    
}