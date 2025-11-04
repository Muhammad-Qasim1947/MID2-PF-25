// 2): In the English alphabet, each letter is classified as being either a vowel or a consonant. In English, 
// the vowels are the letters a, e, i, o, and u. Write a C function named isVowel (char ch) that returns true if ch stores 
// a lower-case English vowel and false otherwise. Then write a C function named isConsonant (char ch) that returns true if ch 
// stores a lower-case English consonant and false otherwise. In both functions, assume that ch holds a lower-case letter 
// from the English alphabet.
//2016


#include <stdio.h>
#include <stdbool.h>  // For using 'bool', 'true', 'false'

// Function to check if a character is a vowel
bool isVowel(char ch) {
    // Check if the character is 'a', 'e', 'i', 'o', or 'u'
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;
    } else {
        return false;
    }
}

// Function to check if a character is a consonant
bool isConsonant(char ch) {
    // Since we assume ch is always a lowercase letter, any letter
    // that is not a vowel is a consonant
    return !isVowel(ch);
}

// Example usage
int main() {
    char ch;

    printf("Enter a lowercase letter: ");
    scanf("%c", &ch);

    if (isVowel(ch)) {
        printf("%c is a vowel.\n", ch);
    } else if (isConsonant(ch)) {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}