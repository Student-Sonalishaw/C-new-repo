#include<stdio.h>
//write a program to remove duplicate elements from array
int removeDuplicates(int arr[], int n){
    for(int i = 0; i < n; i++){
        for (int j = i+1; j < n; )
        {
           if (arr[i] == arr[j])
           {//shift elements left to overwrite duplicate
            for (int k = j; k < n-1; k++)
            {
                arr[k] = arr[k+1];
            }
            n--; //reduce size since one element is removed
           } else{
            j++;
           }
        } 
        }
        return n; //return new size
    }
int main(){
    int arr[] = {1,5,3,2,7,2,5};
    int n = sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < n; i++)
    {
      printf("%d ",arr[i]);
    }
    //call function remove duplicates
    int newSize = removeDuplicates(arr, n);

    printf("\n\nArray after removing duplicates: \n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
    
}