#include <stdio.h>

int main() {
int choice;
float num1, num2, result;
do {
printf("    Arithmetic Operations Menu     \n");
printf("===================================\n");
printf("1. Addition (+)\n");
printf("2. Subtraction (-)\n");
printf("3. Multiplication (*)\n");
printf("4. Division (/)\n");
printf("5. Exit\n");
printf("Enter your choice : ");
scanf("%d", &choice);

if (choice >= 1 && choice <= 4) {
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    }

    switch (choice) {
    case 1:
    result = num1 + num2;
    printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, result);
    break;
                
    case 2:
    result = num1 - num2;
    printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, result);
     break;
                
    case 3:
     result = num1 * num2;
     printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, result);
     break;
                
    case 4:
    if (num2 != 0) {
    result = num1 / num2;
     printf("\nResult: %.2f / %.2f = %.2f\n", num1, num2, result);
    } 
    else 
    {
    printf("\nError: Division by zero is not allowed!\n");
    }
    break;
                
    case 5:
     printf("\nExiting the program. Goodbye!\n");
     break;
                
    default:
    printf("\nInvalid choice! Please select an option from 1 to 5.\n");
    }    
    } while (choice != 5);
    return 0;
}