// simple calculator

#include <stdio.h>
#include <stdbool.h>

void calculate(int selection)  {
    int fNum;
    int sNum;
    printf("Enter first number:\n");
    scanf("%d", &fNum);
    printf("Enter second numer:\n");
    scanf("%d", &sNum);  

    if (selection == 1) {
        printf("\n[!] Answer: %d", fNum * sNum);
    }  
    else if (selection == 2) {
        printf("\n[!] Answer: %d", fNum - sNum);
    }
    else if (selection == 3) {
        printf("\n[!] Answer: %d", fNum + sNum);
    } 
    else if (selection == 4) {
        printf("\n[!] Answer: %d", fNum / sNum);
    }
}

void welcomeMsg() {
    int selection;
    printf("Choose from the following:\n");
    printf("\n1) Multiplication (*)");
    printf("\n2) Subtraction (-)");
    printf("\n3) Addition (+)");
    printf("\n4) Division (/)\n\n");
    scanf("%d", &selection);
    calculate(selection);
}

int main() { 
    welcomeMsg();
}
