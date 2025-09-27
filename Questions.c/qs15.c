#include<stdio.h>
//Find largest element of an array
int main(){
    int n;
    int largest;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n",largest);

    return 0;
}