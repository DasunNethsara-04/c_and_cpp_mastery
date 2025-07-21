#include <stdio.h>
#include <stdlib.h>

int *func()
{
    // if we set the variable to static (which means, set the local variable to global variable), it will work
    // static int a = 20;

    int a = 20;
    return &a;
}

int main()
{
    // 1st way - De-allocation of Memory

    // dynamically allocate the memory using malloc() function
    int *ptr1 = (int *)malloc(sizeof(int));
    *ptr1 = 10;

    printf("Before freeing: %d\n", *ptr1);

    // free the dynamically allocated memory space
    free(ptr1);

    // get the value of the pointer (now it is a dangling pointer)
    printf("After freeing: %d\n", *ptr1); // a random garbage value will be printed

    // we must set the pointer to NULL after freeing it.
    ptr1 = NULL;

    // 2nd way - function call
    // create a pointer to save the address of the function func() returns.
    // int *ptr2 = func();
    // printf("Value returned: %d\n", *ptr2); // a random garbage value will be printed or error

    // 3rd way - Variable Goes Out of Scope
    int *ptr3;
    {
        int a = 30;
        ptr3 = &a;
        printf("Value of a in the scope: %d\n", *ptr3);
    }
    printf("Value of a out of the scope: %d\n", *ptr3);

    return 0;
}