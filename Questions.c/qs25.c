#include<stdio.h>
// enter an array size n and sort this in descending order. we are using bubble sort
int main(){
    int n;
    printf("Enter thye size of the array: ");
    scanf("%d",&n);

    int arr[n]; //Declare the size of an array
    printf("Enter %d elements: \n",n);
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //sort array in descending order by using bubble sort
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j< n-i-1; j++){
            if(arr[j]<arr[j+1]){ // just flip the sign.
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //print sorted array
     printf("The reversed array: \n");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
    
}