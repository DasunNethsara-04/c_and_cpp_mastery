//
// Project 15 - Library Management System
// Created by Dasun Nethsara on 7/29/2025.
//

// just for testings
#define USER_UN "user"
#define USER_PW "user"
#define ADMIN_UN "admin"
#define ADMIN_PW "admin"
#include "utils/common.h"

#include <stdio.h>
#include "utils/book.h"
#include "utils/user.h"

int is_logged_in = 0;
// 1 - Library Admin (default)
// 2 - User
int user = 1;

int get_length(char *type)
{
    FILE *fptr;
    char c;
    int count = 0;

    fptr = fopen(type, "r");
    if (fptr == NULL)
    {
        printf("No\n");
        return 0;
    }

    c = getc(fptr);
    while (c != EOF)
    {
        if (c == '\n')
            count++;
        c = getc(fptr);
    }
    fclose(fptr);
    return count;
}

void render_menu(int role)
{
    int choice;
    if (role == 1)
    {
        // struct Book books[MAX_BOOKS];
        // admin menu
        printf("\nWelcome back, Admin\n");

        while (1)
        {
            printf("1 - Add a book\n");    // done
            printf("2 - Get all books\n"); // done
            printf("3 - Search a book\n"); // done
            printf("4 - Edit Book\n");     // done
            printf("5 - Delete Book\n");   // done
            printf("6 - Add a User\n");    // done
            printf("7 - Get all users\n"); // done
            printf("8 - Search a user\n"); // done
            printf("9 - Edit User\n");
            printf("10 - Delete User\n");
            printf("11 - Exit\n");

            printf("Choice: ");
            scanf("%d", &choice);
            while (getchar() != '\n')
                continue;

            switch (choice)
            {
            case 1:
                add_book(role);
                break;
            case 2:
                show_all_books();
                break;
            case 3:
                search_book();
                break;
            case 4:
                edit_book(role);
                break;
            case 5:
                delete_book(role);
                break;
            case 6:
                add_user(role);
                break;
            case 7:
                show_all_users(role);
                break;
            case 8:
                search_user(role);
                break;
            case 9:
                edit_user();
                break;
            case 10:
                delete_user(role);
            case 11:
                printf("Bye\n");
                return;
            default:
                printf("Invalid Input\n");
                return;
            }
        }
    }
    else
    {
        // user menu
        printf("\nHello User!\n");
    }
}

void login(int role)
{
    char un[MAX_CRED_UN], pw[MAX_CRED_PW];
    printf("Login to proceed!\n");

    printf("Username: ");
    fgets(un, MAX_CRED_UN, stdin);
    size_t len1 = strlen(un);
    if (len1 > 0 && un[len1 - 1] == '\n')
        un[len1 - 1] = '\0';

    printf("Password: ");
    fgets(pw, MAX_CRED_PW, stdin);
    size_t len2 = strlen(pw);
    if (len2 > 0 && pw[len2 - 1] == '\n')
        pw[len2 - 1] = '\0';

    if (role == 1)
    {
        if (strcmp(un, ADMIN_UN) == 0 && strcmp(pw, ADMIN_PW) == 0)
        {
            is_logged_in = 1;
            render_menu(role);
        }
        else
        {
            printf("Invalid Username or Password!\n");
        }
    }
    else
    {
        if (strcmp(un, USER_UN) == 0 && strcmp(pw, USER_PW) == 0)
        {
            is_logged_in = 1;
            render_menu(role);
        }
        else
        {
            printf("Invalid Username or Password!\n");
        }
    }
}

int main()
{
    printf("\nLibrary Management System\n");

    printf("Enter Your Role (1 - Admin, 2 - User): ");
    scanf("%d", &user);
    while (getchar() != '\n')
        continue;
    login(user);

    return 0;
}