#include <stdio.h>

struct Student
{
    int Id;
    char name[100];
    int marks[3];
    float total;
    float average;
    char grade;
};

// function prototypes
void addStudent(struct Student students[], int *count);
void displayAll(struct Student students[], int count);
void calculateResult(struct Student *students);
char getGrade(float avg);
void searchById(struct Student students[], int count);
int isMarksValid(int marks);

int main()
{
    struct Student students[100];
    int count = 0;
    int choice;

    do
    {
        printf("\n--- Student Report Card ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent(students, &count);
            break;
        case 2:
            displayAll(students, count);
            break;
        case 3:
            searchById(students, count);
            break;
        case 4:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}

void addStudent(struct Student students[], int *count)
{
    if (*count >= 100)
    {
        printf("Capacity Filled!\n");
        return;
    }
    int mrks = 0;
    students[*count].Id = *count + 1;

    printf("Enter Name: ");
    scanf("%s", &students[*count].name);

    for (int i = 0; i < 3; i++)
    {
        mrks = 0;
        printf("Enter Subject %d Marks: ", i + 1);
        scanf("%d", &mrks);

        if (isMarksValid(mrks))
            students[*count].marks[i] = mrks;
        else
            students[*count].marks[i] = 0;
    }

    // calculate the result
    calculateResult(&students[*count]);

    (*count)++;
    printf("Student added successfully!\n");
}

void displayAll(struct Student students[], int count)
{
    printf("\n--- All Students ---\n");
    for (int i = 0; i < count; i++)
    {
        printf("ID: %d\n", students[i].Id);
        printf("Name: %s\n", students[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("Subject %d: %d\n", j + 1, students[i].marks[j]);
        }
        printf("Total: %.2f\n", students[i].total);
        printf("Average: %.2f\n", students[i].average);
        printf("Grade: %c\n", students[i].grade);
        printf("----------------------\n\n");
    }
}

void calculateResult(struct Student *students)
{
    int total = 0;
    float avg = 0;
    for (int i = 0; i < 3; i++)
    {
        total += students->marks[i];
    }
    avg = total / 3;
    students->total = total;
    students->average = avg;

    // get grade
    char grade = getGrade((int)avg);
    students->grade = grade;
}

char getGrade(float avg)
{
    if (avg >= 90)
        return 'A';
    else if (avg >= 80)
        return 'B';
    else if (avg >= 70)
        return 'C';
    else if (avg >= 60)
        return 'D';
    else
        return 'F';
}

void searchById(struct Student students[], int count)
{
    int id;
    // get the student id
    printf("Enter Student ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (students[i].Id == id)
        {
            printf("\n-- Details of %s (Student ID: %d) --\n", students[i].name, id);
            printf("ID: %d\n", students[i].Id);
            printf("Name: %s\n", students[i].name);
            for (int j = 0; j < 3; j++)
            {
                printf("Subject %d: %d\n", j + 1, students[i].marks[j]);
            }
            printf("Total: %.2f\n", students[i].total);
            printf("Average: %.2f\n", students[i].average);
            printf("Grade: %c\n", students[i].grade);
            return;
        }
    }
    printf("Student Not Found!");
}

int isMarksValid(int marks)
{
    return marks >= 0 && marks <= 100 ? 1 : 0;
}