//
// Project 2 - Simple Calculator (CLI)
// Created by Dasun Nethsara on 7/23/25.
//

#include <stdio.h>

float add(float num1, float num2)
{
    return num1 + num2;
}

float sub(float num1, float num2)
{
    return num1 - num2;
}

float mult(float num1, float num2)
{
    return num1 * num2;
}

float div(float num1, float num2)
{
    if (num2 == 0)
    {
        printf("Division by zero is undefined\n");
        return 0.0;
    }
    return num1 / num2;
}

int is_operator_valid(char op)
{
    return (op == '+' || op == '-' || op == '*' || op == '/') ? 1 : 0;
}

int main()
{
    float num1, num2, output = 0;
    char op, again;

    printf("Simple Calculator\n");

    while (1)
    {
        // get the first number
        printf("Enter First Number: ");
        if (scanf("%f", &num1) != 1)
        {
            printf("Invalid Input. Please enter a valid number.\n");
            return 1;
        }

        // get the second number
        printf("Enter Second Number: ");
        if (scanf("%f", &num2) != 1)
        {
            printf("Invalid Input. Please enter a valid number.\n");
            return 1;
        }

        // get the operator
        printf("Enter The Operator (+, -, *, /): ");
        scanf("\n%c", &op);

        if (!is_operator_valid(op))
        {
            printf("Invalid Operator! Please enter a valid operator.\n");
            return 1;
        }

        switch (op)
        {
        case '+':
            output = add(num1, num2);
            break;
        case '-':
            output = sub(num1, num2);
            break;
        case '*':
            output = mult(num1, num2);
            break;
        case '/':
            output = div(num1, num2);
            break;
        default:
            printf("Invalid Operator");
        }

        printf("\nOutput is: %.3f\n", output);

        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &again);

        if (again != 'y' && again != 'Y')
            break;
    }

    return 0;
}