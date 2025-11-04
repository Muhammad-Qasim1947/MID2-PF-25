#include <stdio.h>

int wordcapital(char sentence[] , int size){
    int count = 0 ;
    for (int i = 0; i < size ; i++){
        if ((i == 0 && sentence[i] != ' ') || (sentence[i] != ' ' && sentence[i-1] == ' ')){
            count++ ;
            if (sentence[i] >= 'a' && sentence[i] <= 'z'){
                sentence[i] = sentence[i] - 32 ;
            }
        }
    }
    return count ;
}

void DelPunctuation(char sentence[], int size){
    int j = 0 ;
    for (int i = 0; i < size; i++){
        if (sentence[i] != ' ' && sentence[i] != ',' && sentence[i] != '.' &&
            sentence[i] != '\'' && sentence[i] != '\"' && sentence[i] != '!' &&
            sentence[i] != '?' && sentence[i] != ';' && sentence[i] != ':' ){
            
            sentence[j] = sentence[i];
            j++ ;
        }
    }
    sentence[j] = '\0'; 
}

int main(){
    char sentence[100] ;

    printf("Enter The Sentence : ");
    scanf("%[^\n]",sentence);

    int size = 0;
    while (sentence[size] != '\0') {
        size++;
    }

    int count = wordcapital(sentence,size);
    DelPunctuation(sentence, size);
    
    printf("\nUpdated Sentence: %s\n", sentence);
    printf("Total Words: %d\n", count);
}