#include <stdio.h>

void main(void)
{
    int num1, num2, result;
    char op;

    // get the first input for the number 1
    printf("Enter Number 1: ");
    scanf("%d", &num1);

    // get the second input for the number 2
    printf("Enter Number 2: ");
    scanf("%d", &num2);

    // get the third input for the operator
    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Invalid Operator\n");
    }

    printf("\nOutput is: %f\n", result);
}