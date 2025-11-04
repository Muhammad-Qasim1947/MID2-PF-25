// Askari Software House is recruiting new employees. All 50 candidates must go through several tests and
// interviews to be eligible for the job position. You are given data in the following format, and it is assumed
// that these variables have data assigned already.
// int data[50][4]; //This stores 50 candidates information, i.e. ID, Analytical test score, Problem solving test
// score, Interview score
// float GPA[50];
// int salaryDemand[50];
// Write a C language function prototype and definition that accepts given data and prints statistics.
// a) Total number of candidates with GPA higher than 3.0 and more than 50 score in analytical test.
// b) The percentage of candidates that have cumulative test score higher than X and salary lower than Y. (X
// and Y are user entered).
// c) Average salary demand for the post throughout the candidates,
// d) Median is a value that is the middle value in a sorted set. You are required to find and print median GPA
// from all the candidates’ GPA. 

#include <stdio.h>

void printstatistics(int data[10][4] , float gpa[10] , int salarydemand [10]){
    int gpacount = 0 ;
    for (int i = 0; i < 10; i++){
        if (gpa[i] > 3.00 && data[i][1] > 50){
            gpacount++ ; 
    }
} printf("The Candidates With GPA More Than 3.00 Are : %d\n",gpacount);
}

void median(int data[10][4], float gpa[10], int salarydemand[10]){
    float temp;

    // Bubble sort GPA array
    for (int i = 0; i < 9; i++) {
        for (int j = 0 ; j < 10 - i - 1; j++) {
            if (gpa[j] > gpa[j+1]) {
                temp = gpa[j];
                gpa[j] = gpa[j+1];
                gpa[j+1] = temp;
            }
        }
    }

    // For 10 elements (even), median = average of 5th and 6th elements
    float medianValue = (gpa[4] + gpa[5]) / 2.0;

    printf("Median GPA is: %.2f\n", medianValue);
}

void candidates(int data[10][4], float gpa[10], int salarydemand[10] , int X , int Y){
    int candidatecount = 0 ;
    for (int i = 0; i < 10; i++){ 
        int cumulative = data[i][1] + data[i][2] + data[i][3] ;
        if (cumulative > X && salarydemand[i] < Y){
            candidatecount++;
        }
    }
   printf("The Candidates With TestScore > %d And Salary < %d Are : %d\n", X, Y, candidatecount);
}

void average(int data[10][4], float gpa[10], int salarydemand[10]){
    int sum = 0 ;
    for (int i = 0; i < 10; i++){
        sum += salarydemand[i];
    } 
    float avg = sum / 10 ;
    printf("%.2f",avg);
}

int main(){
    
    int data[10][4] = {{57, 53, 35, 8}, {63, 46, 17, 31} , {69, 42, 5, 28},
     {64, 45, 19, 50}, {73, 47, 41, 16}, {89, 11,33, 7}, {72, 45, 18, 30}, 
     {70, 43, 4, 27}, {65, 38, 20, 48}, {2, 25, 40, 15}};

    float gpa[10] = {3.3, 0.8, 1.2, 3.5, 2.1, 0.6, 1.8, 2.3, 1.0, 1.2};

    int salarydemand[10] = {90000, 240000, 440000, 120000, 160000, 290000,
         330000, 170000, 460000 , 370000};
   
    int X , Y ;
    printf("Enter The Test Score (X) :");
    scanf("%d",&X);
    printf("\nEnter The Salary (Y) :");
    scanf("%d",&Y);
    

    printstatistics(data , gpa , salarydemand);
    median(data , gpa , salarydemand);
    candidates(data , gpa , salarydemand , X , Y);
    average(data , gpa , salarydemand);

    return 0;
}