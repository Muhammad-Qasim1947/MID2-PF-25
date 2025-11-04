// consider user gives us a string value sentence and we have to capitalize 
// 1st and last letter of each word or the sentence how we will do it 
//2017

#include <stdio.h>
int main(){
    char sentence[100];
    printf("Enter A Sentence : ");
    scanf(" %c",&sentence);

for (int i = 0; sentence[i] != '\0'; i++){
    if (i == 0 && sentence[i] != ' ' || sentence[i] != ' ' && sentence[i-1] == ' '){
        if (sentence[i] >= 'a' && sentence[i] <= 'z'){
            sentence[i] = sentence[i] - 32 ;
        }
    }

    if (sentence[i] != ' ' && (sentence[i+1] == ' ' || sentence[i+1] == '\0')){
        if (sentence[i] >= 'a' && sentence[i] <= 'z'){
        sentence[i] = sentence[i] - 32 ;
    }
}

printf("Updated Sentence : %s\n",sentence);

return 0;

}
}