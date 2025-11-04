// Q2: Consider the given table, the rows represent the cities, and the columns represent the days. The numbers in
// the slots shows the temperature of four different cities for a given day. You are required to declare the 2D array
// “temperature” that would be utilized to store the information given in the table. Marks: 16(2+7+7)

// a. Read the data into the 2D-array by receiving the data from user.
// b. Write a method “HottestDay(int temperature[ ][ ])” that would display the hottest day for each city.
// c. Write a method “AverageTemperature(int temperature[ ][ ])” that would display the average
// temperature of Islamabad for the whole week. 

#include <stdio.h>

void readtemperature(int temperature[4][7]){

    char cities[4][20] = {"Karachi","Lahore", "Peshawar", "Islamabad"};
    char days[7][20] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    for (int i = 0; i < 4; i++){
        printf("Enter The Temperature For %s",cities[i]);
        for (int j = 0; j < 7; j++){
            printf("%s: ", days[j]);
            scanf("%d",&temperature[i][j]);
        } 
    }
}

void hottestday(int temperature[4][7] ){

    char cities[4][20] = {"Karachi","Lahore", "Peshawar", "Islamabad"};
    char days[7][20] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    for (int i = 0; i < 4; i++){
       int max = temperature[i][0];
       int hottestday = 0 ;
        for (int j = 0; j < 7; j++){
          if (temperature[i][j] > max ){
            max = temperature[i][j];
            hottestday = j ;
          }
       }
        printf("%s: %s (%d°C)\n", cities[i], days[hottestday], max);
    }
}


void AverageTemperature(int temperature[4][7]) {
    int j, sum = 0;
    for (j = 0; j < 7; j++) {
        sum += temperature[3][j]; // Islamabad is row 3
    }
    float avg = sum / 7.0;
    printf("Average temperature of Islamabad = %.2f°C\n", avg);
}

int main(){
    int temperature[4][7];
    readtemperature(temperature);
    hottestday(temperature);
    AverageTemperature(temperature);
    
}