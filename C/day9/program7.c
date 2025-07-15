#include <stdio.h>
#include <string.h>

int main(void)
{
    char text1[20] = "Hello";
    char text2[10] = "Hello";

    // implementation of strcmp()
    int flag = 0;
    for (int i = 0; text1[i] != '\0' || text2[i] != '\0'; i++)
    {
        if (text1[i] != text2[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Same\n");
    else
        printf("Not Same\n");

    return 0;
}