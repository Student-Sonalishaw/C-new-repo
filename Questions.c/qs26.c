#include<stdio.h>
// Search for an element in an array by linear search
int main(){
    int n , key , found = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n]; //Declare the size of an array
    printf("Enter %d elements: \n",n);//Input elements
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //input elements for search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    //Linear search
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            printf("Element %d found at position %d\n", key , i+1);
            found = 1;
            break; // stop after first search
        }
    }

    if(!found){
        printf("Element %d not found in the array\n", key);
    }

    return 0;
    
}