// You are given the population of 3 cities over 3 years stored in a 3×3 matrix.
// Write a function Find_MaxRow(int arr[3][3]) to find which city (row) 
// has the highest total population over the years.

#include <stdio.h>

void maxrow(int population[3][3]) {
    // Input population
    printf("Enter the population of 3 cities over 3 years:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("City %d, Year %d: ", i + 1, j + 1);
            scanf("%d", &population[i][j]);
        }
    }

    int maxsum = 0;
    int maxrow = 0;

    // Find the row (city) with the highest total population
    for (int i = 0; i < 3; i++) {
        int rowsum = 0;
        for (int j = 0; j < 3; j++) {
            rowsum += population[i][j];
        }
        if (i == 0 || rowsum > maxsum) {
            maxsum = rowsum;
            maxrow = i;
        }
    }

    // Print result
    printf("City No %d has the highest population of %d\n", maxrow + 1, maxsum);
}

int main() {
    int population[3][3];

    maxrow(population);

    return 0;
}
