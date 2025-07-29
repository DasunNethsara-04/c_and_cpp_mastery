//
// Project 15 - Library Management System
// Created by Dasun Nethsara on 7/29/2025.
//

#define MAX_CRED_UN 20
#define MAX_CRED_PW 20
#define MAX_BOOK_NAME_LEN 100
#define MAX_USER_NAME_LEN 100
#define MAX_BORROWABLE_BOOKS 2
#define MAX_BOOKS 200
#define MAX_USERS 100
#define USERS_DB "users.txt"
#define BOOKS_DB "books.txt"

// just for testings
#define USER_UN "user"
#define USER_PW "user"
#define ADMIN_UN "admin"
#define ADMIN_PW "admin"

#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[MAX_BOOK_NAME_LEN];
    char author[MAX_USER_NAME_LEN];
    int copies;
};

struct User
{
    int id;
    char name[MAX_USER_NAME_LEN];
    int borrowed[MAX_BORROWABLE_BOOKS];
};

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
            printf("1 - Add a book\n");
            printf("2 - Get all books\n");
            printf("3 - Search a book\n");
            printf("4 - Edit Book\n");
            printf("5 - Delete Book\n");
            printf("6 - Exit\n");

            printf("Choice: ");
            scanf("%d", &choice);
            while (getchar() != '\n')
                continue;

            switch (choice)
            {
            case 1:
                add_book();
                break;
            case 2:
                show_all_books();
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
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

int add_book()
{
    // check the login status and role (ADMIN only)
    if (!is_logged_in || user != 1)
    {
        printf("Login First!");
        return 1;
    }

    FILE *fptr;
    struct Book book;
    int len = get_length(BOOKS_DB);

    fptr = fopen(BOOKS_DB, "a");
    if (fptr == NULL)
    {
        printf("Unable to load the books database!\n");
        return 1;
    }

    printf("\nAdd New Book\n");

    // get user inputs
    book.id = len;
    printf("Book Name: ");
    fgets(book.name, MAX_BOOK_NAME_LEN, stdin);
    size_t len1 = strlen(book.name);
    if (len1 > 0 && book.name[len1 - 1] == '\n')
        book.name[len1 - 1] = '\0';

    printf("Book Author: ");
    fgets(book.author, MAX_USER_NAME_LEN, stdin);
    size_t len2 = strlen(book.author);
    if (len2 > 0 && book.author[len2 - 1] == '\n')
        book.author[len2 - 1] = '\0';

    printf("No. of Copies: ");
    scanf("%d", &book.copies);
    while (getchar() != '\n')
        continue;

    // write the contents to the file
    fprintf(fptr, "%d | %s | %s | %d\n", book.id, book.name, book.author, book.copies);

    printf("New Book Saved\n");

    fclose(fptr);
    return 0;
}

int show_all_books()
{
    char line[256];
    struct Book book;
    int books_len = get_length(BOOKS_DB);
    printf("%d\n", books_len);
    FILE *fptr;

    fptr = fopen(BOOKS_DB, "r");
    if (fptr == NULL)
    {
        printf("Unable to load the books database\n");
        return 1;
    }

    printf("\nAll Books\n");
    for (int i = 0; i < books_len; i++)
    {
        if (fgets(line, sizeof(line), fptr) != NULL)
        {
            sscanf(line, "%d | %[^\n|] | %[^\n|] | %d", &book.id, book.name, book.author, &book.copies);
            printf("\nBook ID: %d\n", book.id);
            printf("Book Name: %s\n", book.name);
            printf("Book Author: %s\n", book.author);
            printf("No. of copies available: %d\n", book.copies);
            printf("----------------------------\n");
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