// You are given the marks of students in a numeric form (e.g., 7531).
// If the number of digits is even, encode the number such that the largest digit comes first 
//and the smallest digit comes second.
// If the number of digits is odd, the smallest digit comes first and the largest digit
// comes second.
// Write a function encodeResult(int digits[], int n) that performs this encoding and 
//prints the result.  

#include <stdio.h>

void encoderesult(int digits[] , int n){
   int largest = digits[0] ;
   int smallest = digits[0] ;
   int poslargest = 0 ;
   int possmallest = 0 ;
   
   for (int i = 0; i < n ; i++){
      if (digits[i] > largest){
        largest = digits[i]; 
        poslargest = i ;
      }
      
      if (digits[i] < smallest){
        smallest = digits[i] ;
        possmallest = i;
      }
   }
    if (n % 2 == 0){
       int temp = digits[0];
       digits[0] =  digits[poslargest];
       digits[poslargest] = temp ;

       temp = digits[1];
       digits[1] = digits[possmallest];
       digits[possmallest] = temp;

    } else {
       int temp = digits[0];
       digits[0] = digits[possmallest];
       digits[possmallest] = temp;

       temp = digits[1];
       digits[1] = digits[poslargest];
       digits[poslargest] = temp;
    }

    printf("Encoded number: ");
    for (int i = 0; i < n; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");
}

int main(){
   int n ;

   printf("Enter The Number Of Digits : ");
   scanf("%d",&n);

   int digits[n];

   printf("Enter The Digits : ");
   for (int i = 0; i < n; i++){
      scanf("%d",&digits[i]);
   }
    
   encoderesult(digits , n);

   return 0;
}