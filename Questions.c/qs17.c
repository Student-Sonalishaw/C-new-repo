#include<stdio.h>
//print sum of an array
int main(){
    int n;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);

    int arr[n];
    int sum = 0;

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }


    printf("The sum of element in the array is: %d\n",sum);


    return 0;
}