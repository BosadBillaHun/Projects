#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    float a, b;
    int option;

    printf("---Calculator---");
    printf("\n");
    // using loop for never ending program
    while(1) {
        // Main Menu
        printf("1 - Add\n");
        printf("2 - Substract\n");
        printf("3 - Multiply\n");
        printf("4 - Divide\n");
        printf("5 - Exit\n");

        // Choosing option from the menu
        printf("Enter any option: ");
        scanf("%d", &option);

        // Going into menu options method
        switch(option) {
            case 1: // Addition
                system("cls");
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Sum = %.2f\n", a + b);
                break;
            case 2: // Subtraction
                system("cls");
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Sum = %.2f\n", a - b);
                break;
            case 3: // Multiplication
                system("cls");
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Sum = %.2f\n", a * b);
                break;
            case 4: // Division
                system("cls");
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Sum = %.2f\n", a / b);
                break;
            case 5: // Exit the program
                printf("\nExiting...\n");
                exit(0);
            default: printf("Invalid Input\n");
        }

        // Going back to main menu
        // the loop makes this program running always, this code below lets the user control the runtime.
        printf("Press Enter to goto main menu.\n");
        if(!kbhit()) { // kbhit is a function that checks if a key is pressed.
            getch(); // waits for any input
            system("cls"); // clear terminal
        }
    }

    return 0;
}
