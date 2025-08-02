#define MAX_CRED_UN 20
#define MAX_CRED_PW 20
#define MAX_BOOK_NAME_LEN 100
#define MAX_USER_NAME_LEN 100
#define MAX_BORROWABLE_BOOKS 2
#define MAX_BOOKS 200
#define MAX_USERS 100
#define USERS_DB "users.txt"
#define BOOKS_DB "books.txt"

typedef struct
{
    char buff[256];
} Line;

struct Book
{
    char name[MAX_BOOK_NAME_LEN];
    char author[MAX_USER_NAME_LEN];
    int copies;
};

struct User
{
    char name[MAX_USER_NAME_LEN];
    char *borrowed;
};