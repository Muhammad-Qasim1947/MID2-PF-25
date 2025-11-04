// Q 2. Write a function named "rotate_left(int arr[], int arrSize)" that would do the task
// mentioned below. [Marks 5]

// The function should shift the contents of each cell one place to the left, except for the
// contents of the first cell, which should be moved into the last. Thus, for example, if the array
// passed to the function looks like this:
// [ 5, 3, 7, 8, 1, 4 ]
// Then function would update the array like this:
// [ 3, 7, 8, 1, 4, 5 ]
//2019

#include <stdio.h>

void rotateleft(int arr[] , int size){
    int first = arr[0];

    for (int i = 0; i < size ; i++){
        arr[i] = arr[i+1];
    }
    arr[size - 1] = first ;

    printf("Rotated Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
}

int main(){
    int arr[] = {5,4,7,8,1,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    rotateleft(arr , size) ;

    return 0 ;
}