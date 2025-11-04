// QUESTION 1: You are writing a program to analyze customer satisfaction survey results for a
// software product. A software product is assessed over certain metrics like UI, 
//performance, usability, support, etc. Each row in a 2D array represents rating 
//by a customer and each column is a metric for which rating is provided. Each rating
// value may range between 1 to 5. Write a program to: 
// create a dynamic array. Example, the end user enters the dimensions of the array. 
// Input all ratings by different users. 
// Calculate the average rating per metric. 
// Display which metric needs the most improvement.


#include <stdio.h>
int main(){
    int customers , metric ;
    printf("Enter The Number Of Customers : ");
    scanf("%d",&customers);
    printf("Enter The Number Of Metrics : ");
    scanf("%d",&metric) ;

    int rating[customers][metric] ;

    printf("Enter The Ratings 1 - 5 : ");
    for (int i = 0; i < customers; i++){
        printf("Customer Number %d : ",i+1);
        for (int j = 0; j < metric; j++){
            scanf("%d",&rating[i][j]);
        }
    }

//average rating per metric
float avg[50];
for (int j = 0; j < metric ; j++){
    int sum = 0 ;
    for (int i = 0; i < customers; i++){
        sum += rating[i][j] ;
    }
    avg[j] = (float)sum / customers ;
}

printf("AVERAGE RATING PER METRIC : ");
for (int j = 0; j < metric ; j++){
    printf("Matric %d Avg : %d",j+1,avg);
}

    int minIndex = 0;
    for (int j = 1; j < metric; j++) {
        if (avg[j] < avg[minIndex]) {
            minIndex = j;
        }
    }

printf("\nMetric %d needs the most improvement (Lowest Average: %.2f)\n",
    minIndex + 1, avg[minIndex]);

return 0 ;

}



