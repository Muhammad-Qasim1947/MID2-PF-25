// Question#5:Imagine you are hired by an agency to encode the message comprising of digits.
// Your task is to write a 'C-program' that would work on any generic input. The key factors of the
// encoding scheme arelisted below:
// 1) Each digit in the input would be considered in the range 1-9 only.
// 2) Each digit in the input would occur only once.
// 3) If the input number has an even number of digits, then the encoding message
//  would contain the maximum number from input as its first digit and the minimum number 
// from input as its second digit.
// 4) If the input number has an odd number of digits, then the encoding message 
// would contain the minimum number from input as its first digit and the maximum number 
// from input as its second digit.
//2021

#include <stdio.h>

int main() {
    int num;
    int digits[10];
    int max, min;

    // Input number of digits
    printf("Enter the number of digits: ");
    scanf("%d", &num);

    // Input digits
    printf("Enter the digits: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &digits[i]);
    }

    // Display entered digits
    printf("You entered: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    // Sort the digits in ascending order (Bubble Sort)
    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (digits[j] > digits[j + 1]) {
                int temp = digits[j];
                digits[j] = digits[j + 1];
                digits[j + 1] = temp;
            }
        }
    }

    // Assign max and min based on even/odd number count
    if (num % 2 == 0) {
        max = digits[num - 1];  // Last element
        min = digits[0];        // First element
    } else {
        max = digits[num - 1];
        min = digits[0];
    }

    // Display results
    printf("Maximum digit: %d\n", max);
    printf("Minimum digit: %d\n", min);

    return 0;
}
