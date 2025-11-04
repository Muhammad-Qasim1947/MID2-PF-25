// QUESTION 2: Write a program that takes a 1D array as input from user and do the 
// following operations:
// Find leader elements in an array. An element is a leader if it is
// greater than all elements to its right. For example, 12, 1, 2, 3, 4, 0.
// Here peak elements are 12 and 4. 
// Last elements will always be a leader element as it has no element on its right side. 
// A peak is an element greater than its neighbors. Count total peaks in an array.

// For Leader Element

#include <stdio.h>
int main(){
    int arr[] = {12,1,2,3,4,0};

for (int i = 0; i < 6 - 1 ; i++){
    for (int j = 0; j < 6 - i - 1 ; j++){
        if (arr[j] > arr[j+1]){
            int temp ;
            temp = arr[j] ;
            arr[j] = arr[j+1];
            arr[j+1] = temp ;
        } 
    }
}
for (int i = 0; i < 6 ; i++){
    printf(" %d",arr[i]);
}

printf("\nThe Leader Element Will Be : %d",arr[5]);
}