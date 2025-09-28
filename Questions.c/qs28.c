#include<stdio.h>
#include<limits.h>
//Find the second largest element in an array
int main(){
    int arr[] = {10,5,6,20,7};
    int n = sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        if(arr[i] > secondLargest && arr[i] < largest){
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN){
        printf("No second largest element avaible.");
    } else
    {
        printf("The second largest element is: %d\n", secondLargest);
    }
    

    return 0;
}