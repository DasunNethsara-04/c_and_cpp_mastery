//
// Project 12 - Contact Book with Structs and File Saving
// Created by Dasun Nethsara on 7/28/25.
//

#define MAX_CONTACT_NAME_LEN 100
#define MAX_CONTACT_NUMBER_LENGTH 12
#define MAX_CONTACTS 150
#define DATABASE_URL "contacts.txt"

#include <stdio.h>
#include <string.h>

// structure of the contact book
struct Contact
{
    int id;
    char name[MAX_CONTACT_NAME_LEN];
    char number[MAX_CONTACT_NUMBER_LENGTH];
};

int get_length(void)
{
    FILE *fptr;
    char c;
    int count = 0;

    fptr = fopen(DATABASE_URL, "r");
    if (fptr == NULL)
    {
        return 0;
    }

    c = getc(fptr);
    while (c != EOF)
    {
        if (c == '\n')
            count++;
        c = getc(fptr);
    }
    return count;
}

void add_contact(struct Contact *contact, const int count)
{
    char num[10];

    // open a file
    FILE *fptr;
    fptr = fopen(DATABASE_URL, "a");
    if (fptr == NULL)
    {
        printf("Unable to load the database!\n");
        return;
    }

    printf("\nSave a new contact\n");

    // get the name
    printf("Enter Name: ");
    fgets(contact->name, MAX_CONTACT_NAME_LEN, stdin);
    size_t len1 = strlen(contact->name);
    if (len1 > 0 && contact->name[len1 - 1] == '\n')
    {
        contact->name[len1 - 1] = '\0';
    }

    // get the number
    printf("Enter Number: ");
    // fgets(num, MAX_CONTACT_NUMBER_LENGTH, stdin);
    fgets(contact->number, MAX_CONTACT_NUMBER_LENGTH, stdin);
    size_t len2 = strlen(contact->number);
    // if (len2 != MAX_CONTACT_NUMBER_LENGTH)
    // {
    //     printf("Invalid Phone Number!");
    //     return;
    // }
    if (len2 > 0 && contact->number[len2 - 1] == '\n')
    {
        contact->number[len2 - 1] = '\0';
    }

    // save the details to the file in specific format
    fprintf(fptr, "%d %s %s", count, contact->name, contact->number);
    fclose(fptr);

    printf("Contact Saved as %s - %s\n", contact->name, contact->number);
}

int show_all_contacts(const int len)
{
    struct Contact buff;

    // load the file database
    FILE *fptr;

    fptr = fopen(DATABASE_URL, "r");
    if (fptr == NULL)
    {
        printf("Unable to load the database!\n");
        return 1;
    }

    if (len < 1)
    {
        printf("No Contacts to show!\n");
        return 1;
    }

    // read the content in the file
    printf("\nAll Contacts\n");
    for (int i = 0; i < len; i++)
    {
        fscanf(fptr, "%d %s %s", &buff.id, buff.name, buff.number);
        printf("%d. %s - %s\n", buff.id + 1, buff.name, buff.number);
    }
    fclose(fptr);

    return 0;
}

int search_by_name(const int len)
{
    struct Contact buff;
    char name[MAX_CONTACT_NAME_LEN];
    // load the database
    FILE *fptr;
    fptr = fopen(DATABASE_URL, "r");
    if (fptr == NULL)
    {
        printf("Unable to load the database!\n");
        return 1;
    }

    if (len < 1)
    {
        printf("No contacts to search!\n");
        return 1;
    }

    // get the contact name
    printf("\nSearch Contact by name!\n");

    printf("Enter Name: ");
    fgets(name, MAX_CONTACT_NAME_LEN, stdin);
    size_t len2 = strlen(name);
    if (len2 > 0 && name[len2 - 1] == '\n')
    {
        name[len2 - 1] = '\0';
    }

    for (int i = 0; i < len; i++)
    {
        fscanf(fptr, "%d %s %s", &buff.id, buff.name, buff.number);

        if (strcmp(buff.name, name) == 0)
        {
            printf("%d. %s - %s\n", buff.id + 1, buff.name, buff.number);
            return 0;
        }
    }

    fclose(fptr);

    printf("Contact Not Found!\n");
    return 1;
}

int delete_contact(const int len)
{
    struct Contact buff[MAX_CONTACTS];
    char name[MAX_CONTACT_NAME_LEN];

    // load the database
    FILE *fptr1;
    fptr1 = fopen(DATABASE_URL, "r");
    if (fptr1 == NULL)
    {
        printf("Unable to load the database!\n");
        return 1;
    }
    printf("%d\n", len);
    if (len < 1)
    {
        printf("No contacts to search!\n");
        return 1;
    }

    // get the contact name
    printf("\nDelete Contact\n");

    printf("Enter Name: ");
    fgets(name, MAX_CONTACT_NAME_LEN, stdin);
    size_t len2 = strlen(name);
    if (len2 > 0 && name[len2 - 1] == '\n')
    {
        name[len2 - 1] = '\0';
    }

    for (int i = 0; i < len; i++)
    {
        fscanf(fptr1, "%d %s %s", &buff[i].id, buff[i].name, buff[i].number);
    }
    fclose(fptr1);

    FILE *fptr2;
    fptr2 = fopen(DATABASE_URL, "w");
    if (fptr2 == NULL)
    {
        printf("Unable to load the database!\n");
        return 1;
    }

    for (int i = 0; i < len; i++)
    {
        if (strcmp(buff[i].name, name) == 0)
            continue;
        fprintf(fptr2, "%d %s %s\n", buff[i].id, buff[i].name, buff[i].number);
    }
    fclose(fptr2);
    return 0;
}

int main()
{
    int choice;

    struct Contact contacts[MAX_CONTACTS];

    while (1)
    {
        printf("\nCLI Phone Book - v2\n");
        printf("Choose an option to continue!\n");
        printf("1 - Create New Contact\n");
        printf("2 - Show all contacts\n");
        printf("3 - Search by Name\n");
        printf("4 - Delete Contact\n");
        printf("5 - Exit\n");

        printf("Choice: ");
        scanf("%d", &choice);
        while (getchar() != '\n')
            continue;

        switch (choice)
        {
        case 1:
            add_contact(&contacts[get_length()], get_length());
            break;
        case 2:
            show_all_contacts(get_length());
            break;
        case 3:
            search_by_name(get_length());
            break;
        case 4:
            delete_contact(get_length());
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