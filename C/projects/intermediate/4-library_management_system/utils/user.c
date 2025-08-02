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

    struct User user;
    FILE *fptr = fopen(USERS_DB, "a");
    // int users_length = get_length(USERS_DB);
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
    struct User user;
    int users_len = get_length(USERS_DB);
    FILE *fptr = fopen(USERS_DB, "r");
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
    struct User user;
    char query[MAX_USER_NAME_LEN];
    int users_len = get_length(USERS_DB);

    FILE *fptr = fopen(USERS_DB, "r");
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
    FILE *fptr2;
    FILE *fptr1 = fopen(USERS_DB, "r");
    Line line;
    struct User users[MAX_USERS];
    char query[MAX_USER_NAME_LEN];
    int users_len = get_length(USERS_DB);

    char temp_name[MAX_USER_NAME_LEN];

    if (fptr1 == NULL)
    {
        printf("Unable to load the users database!\n");
        return 1;
    }

    printf("\nEdit book\n");

    printf("User Name: ");
    fgets(query, MAX_USER_NAME_LEN, stdin);
    size_t len1 = strlen(query);
    if (len1 > 0 && query[len1 - 1] == '\n')
        query[len1 - 1] = '\0';

    for (int i = 0; i < users_len; i++)
    {
        if (fgets(&line, sizeof(line), fptr1) != NULL)
        {
            sscanf(&line, "%[^\n|]|", users[i].name);
            if (strcmp(query, users[i].name) == 0)
            {
                printf("Enter Name: ");
                fgets(temp_name, sizeof(temp_name), stdin);
                size_t len2 = strlen(temp_name);
                if (len2 > 0 && query[len2 - 1] == '\n')
                    temp_name[len2 - 1] = '\0';

                if (strcmp(temp_name, users[i].name) != 0)
                {
                    strcpy(users[i].name, temp_name);
                }
            }
        }
    }

    fclose(fptr1);

    // TODO: fix the bug
    fptr2 = fopen(USERS_DB, "w");
    if (fptr2 == NULL)
    {
        printf("Unable to load the books database!\n");
        return 1;
    }

    // write the content in the book[] into the file
    for (int i = 0; i < users_len; i++)
    {
        fprintf(fptr2, "%s|\n", users[i].name);
    }
    printf("User updated!\n");
    fclose(fptr2);
    return 0;
}

int delete_user(int role)
{
    FILE *fptr2;
    FILE *fptr1 = fopen(USERS_DB, "r");
    Line line;
    struct User users[MAX_USERS];
    char query[MAX_USER_NAME_LEN];
    int users_len = get_length(USERS_DB);

    char temp_name[MAX_USER_NAME_LEN];

    if (fptr1 == NULL)
    {
        printf("Unable to load the users database!\n");
        return 1;
    }

    printf("\nDelete book\n");

    printf("User Name: ");
    fgets(query, MAX_USER_NAME_LEN, stdin);
    size_t len1 = strlen(query);
    if (len1 > 0 && query[len1 - 1] == '\n')
        query[len1 - 1] = '\0';

    for (int i = 0; i < users_len; i++)
    {
        if (fgets(&line, sizeof(line), fptr1) != NULL)
        {
            sscanf(&line, "%[^\n|]|", temp_name);
            if (strcmp(query, users[i].name) == 0)
                continue;
            strcpy(users[i].name, temp_name);
        }
    }

    fclose(fptr1);

    // TODO: fix the bug
    fptr2 = fopen(USERS_DB, "w");
    if (fptr2 == NULL)
    {
        printf("Unable to load the books database!\n");
        return 1;
    }

    // write the content in the book[] into the file
    for (int i = 0; i < users_len; i++)
    {
        fprintf(fptr2, "%s|\n", users[i].name);
    }
    printf("User updated!\n");
    fclose(fptr2);
    return 0;
}

int borrow_book()
{
    Line user_line;
    Line book_line;
    struct Book book[MAX_BOOKS];
    struct User user[MAX_USERS];
    FILE *fptr1 = fopen(BOOKS_DB, "r");
    FILE *fptr2 = fopen(USERS_DB, "r");
    int books_len = get_length(BOOKS_DB);
    int users_len = get_length(USERS_DB);

    char *user_name;
    char *book_name;

    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Unable to load the database!\n");
        return 1;
    }

    for (int i = 0; i < books_len; i++)
    {
        if (fgets(&book_line, sizeof(book_line), fptr1) != NULL)
        {
            sscanf(&book_line, "%[^\n|]|");
        }
    }
}