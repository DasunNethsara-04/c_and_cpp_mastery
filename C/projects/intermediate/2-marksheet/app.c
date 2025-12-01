//
// Project 13 - Student Mark sheet App (multi-student support)
// Created by Dasun Nethsara on 7/28/2025.
//

#define MAX_STUDENT_NAME_LEN 100
#define MAX_STUDENTS 50
#define MAX_SUBJECTS 3
#define MARKSHEET_PATH "marksheet.txt"

#include <stdio.h>
#include <string.h>

// structure for the students
struct Student {
//    int id;
    char name[MAX_STUDENT_NAME_LEN];
    float marks[MAX_SUBJECTS];
    float total;
    float avg;
    char grade;
};

int get_length(void) {
    FILE *fptr;
    char c;
    int count = 0;

    fptr = fopen(MARKSHEET_PATH, "r");
    if (fptr == NULL) {
        printf("No\n");
        return 0;
    }

    c = getc(fptr);
    while (c != EOF) {
        if (c == '\n')
            count++;
        c = getc(fptr);
    }
    fclose(fptr);
    return count;
}


float calculate_avg(const float total) {
    return total / MAX_SUBJECTS;
}

char get_grade(float avg) {
    if (avg >= 75) return 'A';
    else if (avg >= 65) return 'B';
    else if (avg >= 50) return 'C';
    else if (avg >= 35) return 'D';
    else return 'F';
}

void calculate_stats(struct Student *student) {
    float total = 0;
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        total += student->marks[i];
    }
    float avg = calculate_avg(total);
    char grade = get_grade(avg);

    // set the values to the struct
    student->total = total;
    student->avg = avg;
    student->grade = grade;
}


int add_student(struct Student *student) {
    FILE *fptr;
    fptr = fopen(MARKSHEET_PATH, "a");
    if (fptr == NULL) {
        printf("Unable to load the marksheet\n");
        return 1;
    }

    // get the name
    printf("Enter Name: ");
    fgets(student->name, MAX_STUDENT_NAME_LEN, stdin);
    size_t len1 = strlen(student->name);
    if (len1 > 0 && student->name[len1 - 1] == '\n')
        student->name[len1 - 1] = '\0';

    // get the subject marks
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        printf("Enter Subject %d marks: ", i + 1);
        if (scanf("%f", &student->marks[i]) != 1) {
            printf("Invalid Input. Try again!\n");
            while (getchar() != '\n')continue;
            i--;
            continue;
        }
    }

    // calculate the stats
    calculate_stats(student);

    // write the content to the file
    fprintf(fptr, "%s ", student->name);
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        fprintf(fptr, "%.2f ", student->marks[i]);
    }
    fprintf(fptr, "%.2f ", student->total);
    fprintf(fptr, "%.2f ", student->avg);
    fprintf(fptr, "%c\n", student->grade);

    // close the file
    fclose(fptr);
    return 0;
}

int show_all_records(int len) {
    FILE *fptr;
    struct Student student;
    fptr = fopen(MARKSHEET_PATH, "r");

    if (len < 1) {
        printf("No Records to show!");
        return 1;
    }

    printf("\nAll Student Records\n");
    for (int i = 0; i < len; i++) {
        fscanf(fptr, "%s %f %f %f %f %f %c", student.name, &student.marks[0], &student.marks[1], &student.marks[2],
               &student.total, &student.avg, &student.grade);
        printf("Student Name: %s\n", student.name);
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            printf("Subject %d marks: %.2f\n", j + 1, student.marks[j]);
        }
        printf("Total: %.2f\n", student.total);
        printf("Average: %.2f\n", student.avg);
        printf("Grade: %c\n", student.grade);
        printf("----------------------------------\n");
    }
    fclose(fptr);
    return 0;
}

int search_student(int len) {
    FILE *fptr;
    struct Student student;
    char name[MAX_STUDENT_NAME_LEN];

    fptr = fopen(MARKSHEET_PATH, "r");

    if (len < 1) {
        printf("No Records to show!");
        return 1;
    }

    printf("\nSearch Student\n");
    printf("Enter Name: ");
    fgets(name, MAX_STUDENT_NAME_LEN, stdin);
    size_t len1 = strlen(name);
    if (len1 > 0 && name[len1 - 1] == '\n')
        name[len1 - 1] = '\0';

    for (int i = 0; i < len; i++) {
        fscanf(fptr, "%s %f %f %f %f %f %c", student.name, &student.marks[0], &student.marks[1], &student.marks[2],
               &student.total, &student.avg, &student.grade);
        if (strcmp(student.name, name) == 0) {
            printf("Student Name: %s\n", student.name);
            for (int j = 0; j < MAX_SUBJECTS; j++) {
                printf("Subject %d marks: %.2f\n", j + 1, student.marks[j]);
            }
            printf("Total: %.2f\n", student.total);
            printf("Average: %.2f\n", student.avg);
            printf("Grade: %c\n", student.grade);

            fclose(fptr);
            return 0;
        }
    }
    printf("No Record found!\n");

    fclose(fptr);
    return 1;
}

int main() {
    int choice;
    struct Student students[MAX_STUDENTS];

    while (1) {
        printf("\nCLI Mark Sheet\n");
        printf("Choose an option to continue!\n");
        printf("1 - Add New Student Data\n");
        printf("2 - Show all Student\n");
        printf("3 - Search by Name\n");
        printf("4 - Exit\n");

        printf("Choice: ");
        scanf("%d", &choice);
        while (getchar() != '\n') continue;

        switch (choice) {
            case 1:
                add_student(&students[get_length()]);
                break;
            case 2:
                show_all_records(get_length());
                break;
            case 3:
                search_student(get_length());
                break;
            case 4:
                printf("Bye!\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
                return 1;
        }
    }
}
