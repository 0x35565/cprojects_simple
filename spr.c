// Scissors paper rock in C. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computerShot = 0;
int userShot = 0;

void results() {
    if (computerShot == userShot) {
        printf("\nTie! Replay");
    }
    // else statements for winning user
    else if (computerShot == 1 && userShot == 2) {
        printf("\nPlayer wins!\n");
    }
    else if (computerShot == 2 && userShot == 3) {
        printf("\nPlayer wins!\n");
    }
    else if (computerShot == 3 && userShot == 1) {
        printf("\nPlayer wins!\n");
    }
    else if (userShot == 1 && computerShot == 2) {
        printf("\nComputer wins!\n");
    }
    else if (userShot == 2 && computerShot == 3) {
        printf("\nComputer wins!\n");
    }
    else if (userShot == 3 && computerShot == 1) {
        printf("\nComputer wins!\n");
    }
}


void userTurn() {
    int userInput;
    printf("Choose one of the following: \n");
    printf("\n1) Paper\n2) Scissors\n3) Rock\n\n");
    scanf("%d", &userInput);
    userShot = userInput;
    
}


void computerTurn() {
    int i;
    srand(time(0));
    for (i = 0; i < 1; i++) {
        int movePicker = (rand() % 3) + 1;
        if (movePicker == 1) {
            computerShot = 1;
        }
        else if (movePicker == 2) {
            computerShot = 2;
        }
        else if (movePicker == 3) {
            computerShot = 3;
        } 
    }
}


int main() {
    computerTurn();
    userTurn();
    results();
}
