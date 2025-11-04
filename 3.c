// Q1: Write a C program for the requirements given below. [Marks 10, Est. Time 15
// min]
// You are given an integer array heights, where heights[i] represents the height of
// a hill at position i along a trail. You are planning a hiking trip and want to
// maximize the total height gain. The rules are:
// 1. You can only "gain" height by moving from a lower position to a higher one.
// 2. If the height decreases at any point, you stop gaining and start again from
// the next point.
// 3. Each time you stop, keep track of the total gain from the previous segment. In
// the end, select the segment with the highest total gain.
// Your task is to find and return the maximum total height gain you can achieve by
// hiking up the hills on this trail.
// Sample Input: Heights = [100, 180, 260, 310, 40, 535, 695]
// Sample Output: 655

#include <stdio.h>

int maxHeightGain(int heights[], int size) {
    int maxGain = 0, currentGain = 0;
    for (int i = 1; i < size; i++) {
        if (heights[i] > heights[i - 1]) {
            currentGain += heights[i] - heights[i - 1];
        } else {
            if (currentGain > maxGain) {
                maxGain = currentGain;
            }
            currentGain = 0;
        }
    }
    if (currentGain > maxGain) {
        maxGain = currentGain;
    }
    return maxGain;
}

int main() {
    int heights[] = {100, 180, 260, 310, 40, 535, 695};
    int size = sizeof(heights) / sizeof(heights[0]);
    
    printf("Maximum Total Height Gain: %d\n", maxHeightGain(heights, size));
    
    return 0;
}
