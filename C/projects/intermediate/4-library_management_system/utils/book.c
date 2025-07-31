#include <stdio.h>
#include <string.h>
#include "common.h"

int add_book(int role)
{
    // check the login status and role (ADMIN only)
    if (role != 1)
    {
        printf("Only admins can perform this task!");
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
    fprintf(fptr, "%s|%s|%d\n", book.name, book.author, book.copies);

    printf("New Book Saved\n");

    fclose(fptr);
    return 0;
}

int show_all_books()
{
    Line line;
    struct Book book;
    int books_len = get_length(BOOKS_DB);
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
        if (fgets(&line, sizeof(line), fptr) != NULL)
        {
            sscanf(&line, "%[^\n|]|%[^\n|]|%d", book.name, book.author, &book.copies);
            printf("\nBook Name: %s\n", book.name);
            printf("Book Author: %s\n", book.author);
            printf("No. of copies available: %d\n", book.copies);
            printf("----------------------------\n");
        }
    }

    fclose(fptr);
    return 0;
}

int search_book()
{
    FILE *fptr;
    Line line;
    struct Book book;
    char book_name[MAX_BOOK_NAME_LEN];
    int books_len = get_length(BOOKS_DB);
    int val = 0;

    fptr = fopen(BOOKS_DB, "r");
    if (fptr == NULL)
    {
        printf("Unable to load the books database!\n");
        return 1;
    }

    printf("\nSearch book\n");

    printf("Book Name: ");
    fgets(book_name, MAX_BOOK_NAME_LEN, stdin);
    size_t len1 = strlen(book_name);
    if (len1 > 0 && book_name[len1 - 1] == '\n')
        book_name[len1 - 1] = '\0';

    for (int i = 0; i < books_len; i++)
    {
        if (fgets(&line, sizeof(line), fptr) != NULL)
        {
            sscanf(&line, "%[^\n|]|%[^\n|]|%d", book.name, book.author, &book.copies);
            if (strcmp(book_name, book.name) == 0)
            {
                printf("\nBook Name: %s\n", book.name);
                printf("Book Author: %s\n", book.author);
                printf("No. of copies available: %d\n\n", book.copies);

                fclose(fptr);
                return 0;
            }
        }
    }
    printf("%d\n", val);
    printf("Book not found!\n");

    fclose(fptr);
    return 1;
}

int edit_book(int role)
{
    FILE *fptr1;
    FILE *fptr2;
    Line line;
    struct Book books[MAX_BOOKS];
    char query[MAX_BOOK_NAME_LEN];
    int books_len = get_length(BOOKS_DB);

    char temp_book_name[MAX_BOOK_NAME_LEN];
    char temp_book_author[MAX_USER_NAME_LEN];
    int temp_copies;

    if (role != 1)
    {
        printf("Only admins can perform this task!\n");
        return 1;
    }

    fptr1 = fopen(BOOKS_DB, "r");
    if (fptr1 == NULL)
    {
        printf("Unable to load the books database!\n");
        return 1;
    }

    printf("\nEdit book\n");

    printf("Book Name: ");
    fgets(query, MAX_BOOK_NAME_LEN, stdin);
    size_t len1 = strlen(query);
    if (len1 > 0 && query[len1 - 1] == '\n')
        query[len1 - 1] = '\0';

    for (int i = 0; i < books_len; i++)
    {
        if (fgets(&line, sizeof(line), fptr1) != NULL)
        {
            sscanf(&line, "%[^\n|]|%[^\n|]|%d", &books[i].name, &books[i].author, &books[i].copies);
            if (strcmp(query, books[i].name) == 0)
            {
                // book found
                printf("Book Found!\n");
                // get the updated details
                printf("Book Name: ");
                fgets(temp_book_name, MAX_BOOK_NAME_LEN, stdin);
                len1 = strlen(temp_book_name);
                if (len1 > 0 && temp_book_name[len1 - 1] == '\n')
                    temp_book_name[len1 - 1] = '\0';

                printf("Book Author: ");
                fgets(temp_book_author, MAX_USER_NAME_LEN, stdin);
                size_t len2 = strlen(temp_book_author);
                if (len2 > 0 && temp_book_author[len2 - 1] == '\n')
                    temp_book_author[len2 - 1] = '\0';

                printf("No. of Copies: ");
                scanf("%d", &temp_copies);
                while (getchar() != '\n')
                    continue;

                // check for changes then update
                if (strcmp(temp_book_name, books[i].name) != 0)
                    strcpy(books[i].name, temp_book_name);
                if (strcmp(temp_book_author, books[i].author) != 0)
                    strcpy(books[i].author, temp_book_author);
                if (books[i].copies != temp_copies)
                    books[i].copies = temp_copies;
            }
        }
    }
    // close the first file
    fclose(fptr1);

    fptr2 = fopen(BOOKS_DB, "w");
    if (fptr2 == NULL)
    {
        printf("Unable to load the books database!\n");
        return 1;
    }

    // write the content in the book[] into the file
    for (int i = 0; i < books_len; i++)
    {
        fprintf(fptr2, "%s|%s|%d\n", books[i].name, books[i].author, books[i].copies);
    }
    printf("Book updated!\n");
    fclose(fptr2);
    return 0;
}

int delete_book(int role)
{
    if (role != 1)
    {
        printf("Only admins can perform this task!\n");
        return 1;
    }

    FILE *fptr1;
    FILE *fptr2;
    Line line;
    char query[MAX_BOOK_NAME_LEN];
    int books_len = get_length(BOOKS_DB);
    struct Book books[MAX_BOOKS];

    fptr1 = fopen(BOOKS_DB, "r");
    if (fptr1 == NULL)
    {
        printf("Unable to load the books database!\n");
        return 1;
    }

    char temp_book_name[MAX_BOOK_NAME_LEN];
    char temp_book_author[MAX_USER_NAME_LEN];
    int temp_copies;

    printf("\nDelete book\n");

    printf("Book Name: ");
    fgets(query, MAX_BOOK_NAME_LEN, stdin);
    size_t len1 = strlen(query);
    if (len1 > 0 && query[len1 - 1] == '\n')
        query[len1 - 1] = '\0';

    for (int i = 0; i < books_len; i++)
    {
        if (fgets(&line, sizeof(line), fptr1) != NULL)
        {
            sscanf(&line, "%[^\n|]|%[^\n|]|%d", temp_book_name, temp_book_author, &temp_copies);
            if (strcmp(query, temp_book_name) != 0)
            {
                strcpy(books[i].name, temp_book_name);
                strcpy(books[i].author, temp_book_author);
                books[i].copies = temp_copies;
            }
            else
            {
                i--;
                books_len - 1;
                continue;
            }
        }
    }

    // close the first file
    fclose(fptr1);

    fptr2 = fopen(BOOKS_DB, "w");
    if (fptr2 == NULL)
    {
        printf("Unable to load the books database!\n");
        return 1;
    }

    // write the content in the book[] into the file
    for (int i = 0; i < books_len - 1; i++)
    {
        fprintf(fptr2, "%s|%s|%d\n", books[i].name, books[i].author, books[i].copies);
    }
    printf("Book Deleted!\n");
    fclose(fptr2);
    return 0;
}