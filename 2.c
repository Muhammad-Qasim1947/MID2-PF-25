// Yasir and Binish are playing a game, where yellow or blue pieces are represented by a colour string. The game rules are as follows:  Yasir moves first then they take alternate turns  With each move, Yasir may remove a yellow piece that has adjacent yellow pieces on both sides Likewise, with each move, Binish may remove any blue piece that has adjacent blue pieces on both sides.  After a piece is remove the string is reduce in size by one piece. For example, removing ‘B’ from “ABC” results in “AC”.  When a player can no longer move, they have lost the game.
// Example: Colours = “yyybbbbyyy”
// Yasir removes the piece ‘y’ at index 1, colours = “yybbbbyyy”
// Binish removes the piece ‘b’ at index 3, colours = “yybbbyyy”
// Yasir removes the piece ‘y’ at index 6, colours = “yybbbyy”
// Binish removes the piece ‘b’ from index 3, colours = “yybbyy”
// Yasir has no other moves, so Binish wins. Display Binish!
// Determine who wins if Yasir and Binish both play with optimum skill. Display the string ‘Yasir’ or ‘Binish’.
// 2018
#include <stdio.h>

int main(){
  char colour[100];
  printf("Enter The Colour Of String : ");
  scanf("%s",&colour);

// find lengthof the colour
int n = 0 ;
while (colour[n] != '\0'){
   n++;
}

// check for moves
int yasirmoves = 0 ;
int binishmoves = 0 ;
for (int i = 1; i < n-1 ; i++){
    if (colour[i-1] == 'y' && colour[i] == 'y' && colour[i+1] == 'y'){ 
       yasirmoves++ ;
    }
    
    if (colour[i - 1] == 'b' && colour[i] == 'b' && colour[i + 1] == 'b') {
    binishmoves++;
    }
}

    if (yasirmoves > binishmoves) {
        printf("Yasir\n");
    } else {
        printf("Binish\n");
    }

    return 0;
}
