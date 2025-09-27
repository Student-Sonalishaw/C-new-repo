#include<stdio.h>
//Find smallest element of an array
int main(){
    int n;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("The smallest element in the array is: %d\n",min);

    return 0;
}