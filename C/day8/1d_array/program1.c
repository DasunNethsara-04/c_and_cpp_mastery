#include <stdio.h>

int main(void)
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Value: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nFor reverse the array\n");

    for (int i = 5; i > 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}