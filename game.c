#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, randomNumber;
    int i = 100;
    int j = 100;

    srand(time(NULL));

    printf("\n");
    printf("\t\t*********************************************************\n");
    printf("\t\t*\t\t WELCOME TO THE GUESS GAME\t\t*\n");
    printf("\t\t*********************************************************\n");
    printf("\n");
    printf("Each player will take turns guessing a random number.\n");
    printf("The range of the numbers will decrease with each turn.\n");
    printf("Let's see who can guess the correct number first!\n");
    printf("\n");
    printf("\n");

printf("First Player turn:");
 printf("\n");
    do {
        randomNumber = (rand() % i) + 1;

        printf("Enter a number between 1 and %d: ", i);

        if (scanf("%d", &num) != 1 || num < 1 || num > i) {
            printf("\n");
            printf("Invalid input. Please enter a number between 1 and %d.\n", i);
            printf("\n");
            while (getchar() != '\n'); 
            continue;
        }

        printf("\n");

        printf("Random Number between 1 and %d is %d\n", i, randomNumber);
        printf("\n");

        if (num == randomNumber) {
            printf("Congratulations! You guessed the correct number.\n");
            printf("\n");
            break;
        } else if (i != 10) {
            printf("Try again.\n");
            printf("\n");
        }

        i = i - 10;
    } while (i != 0);
    printf("Second Player turn:");
    printf("\n");
    do {
        randomNumber = (rand() % j) + 1;

        printf("Enter a number between 1 and %d: ", j);

        if (scanf("%d", &num) != 1 || num < 1 || num > j) {
            printf("\n");
            printf("Invalid input. Please enter a number between 1 and %d.\n", j);
            printf("\n");
            while (getchar() != '\n'); 
            continue;
        }

        printf("\n");

        printf("Random Number between 1 and %d is %d\n", j, randomNumber);
        printf("\n");

        if (num == randomNumber) {
            printf("Congratulations! You guessed the correct number.\n");
            printf("\n");
            break;
        } else if (j != 10) {
            printf("Try again.\n");
            printf("\n");
        }

        j = j - 10;
    } while (j != 0);

    if (i>j) {
        printf("First player won! Congratulations!\n");
    }
    if (j>i)
    {
       printf("Second player won! Well done!\n");
    }
    if (i==j)
    {
         printf("It's a draw! Both players are equally skilled.\n");
    }
  
    printf("\n");
    printf("Thank you for playing the Guess Game. Have a great day!\n");
    printf("\n");

    return 0;
}

