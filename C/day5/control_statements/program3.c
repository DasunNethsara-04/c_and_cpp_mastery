// if...else... statemenst

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // this program cam be optimized more!!!
    if (marks > 0)
    {
        if (marks >= 75)
        {
            printf("A\n");
        }
        else
        {
            if (marks >= 50)
            {
                printf("B\n");
            }
            else
            {
                if (marks >= 30)
                {
                    printf("C\n");
                }
                else
                {
                    printf("F\n");
                }
            }
        }
    }
    else
    {
        printf("Invalid Marks\n");
    }

    return 0;
}