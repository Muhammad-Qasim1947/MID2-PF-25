// Q 1.
// The results from the mayor’s race have been reported by each area as follows:
//  [Marks 5+5+5]
// Area Candidate 1 Candidate 2 Candidate 3 Candidate 4
// 1 192 48 206 37
// 2 147 90 312 21
// 3 186 12 121 38
// 4 114 21 408 39
// 5 267 13 382 29
// Your task is to store the above data into a 2D matrix to perform the analysis given below.
// a) Write a function named “Check_Winner1” that would receive the 2D matrix as its
// input and display the winner by each area.

// Expected output:
// Area 1 : Candidate 3
// Area 2 : Candidate 3
// Area 3 : Candidate 1
// Area 4 : Candidate 3
// Area 5 : Candidate 3
// b) Write a function named “Check_Winner2” that would receive the 2D matrix as its
// input and display the total votes received by each candidate.
// Expected output:
// Candidate 1 : Total votes 906
// Candidate 2 : Total votes 184
// Candidate 3 : Total votes 1429
// Candidate 4 : Total votes 164
// 2 OF 2
// c) Write a function named “Check_Winner3” that would receive the 2D matrix as its
// input and returns the area number in which maximum votes are casted.

// Expected return: 5
//2019


#include <stdio.h>

void checkwinner1(int arr[5][4]){
    for (int i = 0; i < 5 ; i++){
        int maxvotes = arr[i][0];
        int winner = 1 ;
        for (int j = 0; j < 4; j++){
            if (arr[i][j] > maxvotes){
                maxvotes = arr[i][j];
                winner = j + 1 ;
            } 
        }
        printf("Area %d winner: Candidate %d with %d votes\n", i + 1, winner, maxvotes);
    } printf("\n");
}

void checkwinner2(int arr[5][4]){
    for ( int j = 0; j < 4 ; j++){
        int sum = 0 ;
        for (int i = 0; i < 5 ; i++){
            sum += arr[i][j] ;
        } printf("Candidate %d: Total Votes = %d\n", j + 1, sum);
    }
    
}

void checkwinner3(int arr[5][4]){
    int maxvotes = 0;
    int maxarea = 0 ;
        for ( int i = 0; i < 5 ; i++){
        int areasum = 0 ;
        for (int j = 0; j < 4 ; j++){
            areasum += arr[i][j] ;
        }
        if (i == 0 || areasum > maxvotes){
            maxvotes = areasum ;
            maxarea = i + 1 ;
        }
}
printf("\nArea with maximum total votes: Area %d with %d votes\n", maxarea , maxvotes);
}

int main(){
    int arr[5][4] = {
        {192, 48, 206, 37},
        {147, 90, 312, 21},
        {186, 12, 121, 38},
        {114, 21, 408, 39},
        {267, 13, 382, 29}
    } ;

    checkwinner1(arr);
    checkwinner2(arr);
    checkwinner3(arr);
}