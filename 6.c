// Question#2: [16 points, CLO2, 20 mins]
// Scenario: Deoxyribonucleic acid (DNA) is an information carrier in humans’ cells that helps in the development and functioning of an organism. The information in DNA is stored as a code made up of four chemical bases (letters) or nucleotides: adenine (A), guanine (G), cytosine (C), and thymine (T). Human DNA consists of about 3 billion bases, and more than 99 percent of those bases are the same in all people. The meaning of the DNA code lies in the sequence of these nucleotides’ letters i.e. A, G, C & T.
// Task:
// Read a long DNA sequence up to 20 nucleotides and display a histogram of each letter by printing number of ‘*’ against each letter.
// Sample Input:
// AGCTTACATATTACGAGTTG
// Sample Output:
// A: * * * * * *
// G: * * * *
// C: * * *
// T: * * * * * * *
//2022

#include <stdio.h>

int main(){
    char dna[20] ;
    int countA = 0 ;
    int countG = 0 ;
    int countC = 0 ;
    int countT = 0 ;

printf("Enter The DNA Sequence (20 Characters): ");

for (int i = 0; i < 20 ; i++){ 
    scanf(" %c",&dna[i]);
    if (dna[i] == 'A'){
        countA++;
    } else if (dna[i] == 'G'){
        countG++;
    } else if (dna[i] == 'C'){
        countC++;
    } else if (dna[i] == 'T'){
        countT++;
    } 
} 

printf("A : ");
for (int i = 0; i < countA; i++){
    printf("* ");
} printf("\n");

printf("G : ");
for (int i = 0; i < countG; i++){
    printf("* ");
}printf("\n");

printf("C : ");
for (int i = 0; i < countC; i++){
    printf("* ");
}printf("\n");

printf("T : ");
for (int i = 0; i < countT; i++){
    printf("* ");
}printf("\n");

return 0;


}