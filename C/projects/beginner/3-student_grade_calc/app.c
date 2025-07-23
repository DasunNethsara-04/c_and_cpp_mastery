//
// Project 3 - Student Grade Calculator (3 subjects)
// Created by Dasun Nethsara on 7/23/25.
//

#include <stdio.h>

char check_grade(float avgerage)
{
    char grade;
    if (avgerage > 80)
        grade = 'A';
    else if (avgerage > 65)
        grade = 'B';
    else if (avgerage > 55)
        grade = 'C';
    else if (avgerage > 35)
        grade = 'D';
    else
        grade = 'F';
    return grade;
}

float get_total(float arr[])
{
    float total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += arr[i];
    }
    return total;
}

float get_average(int total)
{
    return total / 3;
}

int is_valid_marks(float marks)
{
    return (marks <= 100 && marks >= 0) ? 1 : 0;
}

int main()
{
    float marks[3] = {};
    float total = 0.0, avg = 0.0, temp = 0.0;
    char grade;

    // get marks for three subjects
    for (int i = 0; i < 3; i++)
    {
        temp = 0;
        printf("Enter subject %d marks: ", i + 1);
        scanf("%f", &temp);

        if (is_valid_marks(temp))
            marks[i] = temp;
        else
            marks[i] = 0;
    }

    total = get_total(marks);
    avg = get_average(total);

    // get the grade for the average
    grade = check_grade(avg);

    // display the details
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Subject %d marks: %.2f\n", i + 1, marks[i]);
    }

    printf("\nYour Average: %.3f\n", avg);
    printf("Your Grade: %c\n", grade);

    return 0;
}