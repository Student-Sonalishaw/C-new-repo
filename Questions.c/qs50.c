#include<stdio.h>
//write a program to find the maximum subarray sum(kadane's algorithm)
int maxSubArraysum(int arr[],int n){
    int maxSoFar = arr[0];
    int currentMax = arr[0];

    for(int i = 1; i < n; i++){
        //Either extend the current subarray or start new from current element
        currentMax = (arr[i] > currentMax + arr[i]) ? arr[i] : currentMax + arr[i];
        //update the global max
        maxSoFar = (maxSoFar > currentMax) ? maxSoFar: currentMax;
    }
    return maxSoFar;
}
int main(){
    int arr[] = { -2,1,8,-5,7,-3};
    int n = sizeof(arr[0]);

    int maxSum = maxSubArraysum(arr,n);
    printf("maximum subarray sum is: %d\n",maxSum);

    return 0;
    
}