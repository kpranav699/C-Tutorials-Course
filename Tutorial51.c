#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input andis defined inside stdlib.h
    return rand() % n;
}
// Create Rock, Paper & Scissors Game
// Player 1: rock
// Player 2(Computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissor wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Note:You have to display name of the player during the game. Take users name as an input from the user.
int main()
{
    printf("The random number between 0 to 5 is %d\n", generateRandomNumber(5));
    return 0;
}