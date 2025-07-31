#include <stdio.h>
#include <string.h>
#include "common.h"

int add_user(int role)
{
    if (role != 1)
    {
        printf("Only admins can perform this task!\n");
        return 1;
    }

    FILE *fptr;
    struct User user;
    // int users_length = get_length(USERS_DB);

    fptr = fopen(USERS_DB, "a");
    if (fptr == NULL)
    {
        printf("Unable to load the users database!\n");
        return 1;
    }

    printf("\nAdd New User\n");

    printf("Enter Name: ");
    fgets(user.name, MAX_USER_NAME_LEN, stdin);
    size_t len1 = strlen(user.name);
    if (len1 > 0 && user.name[len1 - 1] == '\n')
        user.name[len1 - 1] = '\0';

    // write the contents to the file
    fprintf(fptr, "%s|\n", user.name);

    printf("New User Saved\n");

    fclose(fptr);
    return 0;
}

int show_all_users(int role)
{
    if (role != 1)
    {
        printf("Only admins can perform this task!\n");
        return 1;
    }

    Line line;
    FILE *fptr;
    struct User user;
    int users_len = get_length(USERS_DB);

    fptr = fopen(USERS_DB, "r");
    if (fptr == NULL)
    {
        printf("Unable to load the users database!\n");
        return 1;
    }

    if (users_len < 1)
    {
        printf("No Users!\n");
        return 1;
    }

    printf("\nAll Users\n");
    for (int i = 0; i < users_len; i++)
    {
        if (fgets(&line, sizeof(line), fptr) != NULL)
        {
            sscanf(&line, "%[^\n|]|", user.name);
            printf("%d. %s\n", i + 1, user.name);
        }
    }
    printf("\n");
    fclose(fptr);
    return 0;
}

int search_user(int role)
{
    if (role != 1)
    {
        printf("Only admins can perform this task!\n");
        return 1;
    }

    Line line;
    FILE *fptr;
    struct User user;
    char query[MAX_USER_NAME_LEN];
    int users_len = get_length(USERS_DB);

    fptr = fopen(USERS_DB, "r");
    if (fptr == NULL)
    {
        printf("Unable to load the users database!\n");
        return 1;
    }

    if (users_len < 1)
    {
        printf("No Users!\n");
        return 1;
    }

    printf("\nShow User\n");

    printf("Enter Name: ");
    fgets(query, sizeof(query), stdin);
    size_t len1 = strlen(query);
    if (len1 > 0 && query[len1 - 1] == '\n')
        query[len1 - 1] = '\0';

    for (int i = 0; i < users_len; i++)
    {
        if (fgets(&line, sizeof(line), fptr) != NULL)
        {
            sscanf(&line, "%[^\n|]|", user.name);
            if (strcmp(query, user.name) == 0)
            {
                printf("\n%d. %s\n", i + 1, user.name);
                fclose(fptr);
                return 0;
            }
        }
    }
    printf("User Not Found!\n");
    fclose(fptr);
    return 1;
}

int edit_user()
{
    //
}

int delete_user(int role)
{
    //
}