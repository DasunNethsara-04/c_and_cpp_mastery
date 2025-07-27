//
// Project 10 - Basic Contact Book using arrays
// Created by Dasun Nethsara on 7/26/25.
//

#define MAX_CONTACTS 100
#define MAX_NAME_LEN 50
#define MAX_NUM_LEN 12

#include <stdio.h>
#include <string.h>

void add_contact(char *name, char *number, int *count)
{
    // get name
    printf("\nSave a new Contact\n");
    printf("Enter Name: ");
    fgets(name, MAX_NAME_LEN, stdin);
    size_t len1 = strlen(name);
    if (len1 > 0 && name[len1 - 1] == '\n')
        name[len1 - 1] = '\0';

    // get phone number
    printf("Enter Number: ");
    fgets(number, MAX_NUM_LEN, stdin);
    size_t len2 = strlen(number);
    if (len2 > 0 && number[len2 - 1] == '\n')
        number[len2 - 1] = '\0';

    ++(*count);

    printf("Contact Saved as %s - %s\n", name, number);
}

void show_all(const char names[][MAX_NAME_LEN], const char nums[][MAX_NUM_LEN], const int count)
{
    if (count < 1)
    {
        printf("No Contacts!\n");
        return;
    }

    printf("\nContact Book\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d. %s - %s\n", i + 1, names[i], nums[i]);
    }
}

int search_by_name(const char names[][MAX_NAME_LEN], const char nums[][MAX_NUM_LEN], const int count)
{
    char name[MAX_NAME_LEN];

    printf("\nSearch Contact by Name\n");
    printf("Enter Name: ");
    fgets(name, MAX_NAME_LEN, stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
        name[len - 1] = '\0';

    for (int i = 0; i < count; i++)
    {
        // printf("%d. %s - %s\n", i + 1, names[i], nums[i]);
        if (strcmp(names[i], name) == 0)
        {
            printf("%d. %s - %s\n", i + 1, names[i], nums[i]);
            return 0;
        }
    }
    printf("Contact Not Found!\n");
    return 1;
}

void delete_contact(char names[][MAX_NAME_LEN], char nums[][MAX_NUM_LEN], int *count)
{
    char name[MAX_NAME_LEN];

    printf("\nDelete Contact\n");

    // search for the contact
    printf("Enter Name: ");
    fgets(name, MAX_NAME_LEN, stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
        name[len - 1] = '\0';

    for (int i = 0; i < *count; i++)
    {
        // printf("%d. %s - %s\n", i + 1, names[i], nums[i]);
        if (strcmp(names[i], name) == 0)
        {
            for (int j = i; j < *count - 1; j++)
            {
                strcpy(names[i], names[i + 1]);
                strcpy(nums[i], nums[i + 1]);
            }
            --(*count);
            printf("Contact Deleted!\n");
            return;
        }
    }
    printf("Contact not found!\n");
}

int main()
{
    char names[MAX_CONTACTS][MAX_NAME_LEN];
    char nums[MAX_CONTACTS][MAX_NUM_LEN];
    int count = 0;
    int choice;

    while (1)
    {
        printf("\nCLI Phone Book\n");
        printf("Choose an option to continue!\n");
        printf("1 - Create New Contact\n");
        printf("2 - Show all contacts\n");
        printf("3 - Search by Name\n");
        printf("4 - Delete Contact\n");
        printf("5 - Exit\n");

        printf("Choice: ");
        scanf("%d", &choice);
        while ((getchar()) != '\n')
            continue;

        switch (choice)
        {
        case 1:
            add_contact(names[count], nums[count], &count);
            break;
        case 2:
            show_all(names, nums, count);
            break;
        case 3:
            search_by_name(names, nums, count);
            break;
        case 4:
            delete_contact(names, nums, &count);
            break;
        case 5:
            printf("Bye!\n");
            return 0;
        default:
            printf("Invalid Choice\n");
            return 1;
        }
    }

    return 0;
}