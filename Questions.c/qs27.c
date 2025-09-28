#include<stdio.h>
// Implement binary search on a sorted array
int main(){
    int n , key , low, high, mid, found = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n]; //Declare the size of an array
    printf("Enter %d elements in sorted array: \n",n);//Input elements
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //input elements for search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    //Binary search
    low = 0;
    high = n-1;

    while (low <= high)
    {
        mid = (low+high)/2;

        if(arr[mid] == key){
            printf("Element %d found at position %d\n", key, mid+1);
            found = 1;
            break;
        }

        if (arr[mid] < key){
            low = mid+1;//Search righ half
        }

        if(arr[mid] > key){
            high = mid-1;//Search left half
        }
    }
    
    if(!found){
        printf("Element %d not found in the array\n", key);
    }

    return 0;
    
}