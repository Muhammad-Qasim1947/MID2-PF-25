// QUESTION 2: Write a program that takes a 1D array as input from user and do the 
// following operations:
// Find leader elements in an array. An element is a leader if it is
// greater than all elements to its right. For example, 12, 1, 2, 3, 4, 0.
// Here peak elements are 12 and 4. 
// Last elements will always be a leader element as it has no element on its right side. 
// A peak is an element greater than its neighbors. Count total peaks in an array.

// For Peak Element

#include <stdio.h>
int main(){
    int arr[] = {12,1,2,3,4,0};
    int n = 6 ;
    int peakCount = 0;

    printf("\nPeak elements are: ");

    for (int i = 0; i < n ; i++) {
        // For first element
        if (i == 0 && arr[i] > arr[i + 1]) {
            printf("%d ", arr[i]);
            peakCount++;
        }
        // For last element
        else if (i == n - 1 && arr[i] > arr[i - 1]) {
            printf("%d ", arr[i]);
            peakCount++;
        }
        // For middle elements
        else if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d ", arr[i]);
            peakCount++;
        }
    }

printf("\nTotal number of peaks: %d", peakCount);

return 0 ;

}