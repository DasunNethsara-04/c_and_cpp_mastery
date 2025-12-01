//
// Created by techs on 9/4/2025.
//

#include <stdio.h>
#include <string.h>
#include "common.h"

int add_todo() {
    int len = find_length();
    todo_t todo;
    FILE *fptr = fopen(TODO_DATABASE, "a");

    if (fptr == NULL) {
        printf("Couldn't load the todo database!\n");
        return 1;
    }

    printf("Add New Task\n");

    printf("Enter Task Name: ");
    fgets(todo.todo_name, MAX_TASK_NAME_LENGTH, stdin);
    size_t len2 = strlen(todo.todo_name);
    if (len2 > 0 && todo.todo_name[len2 - 1] == '\n')
        todo.todo_name[len2 - 1] = '\0';

    // set the id and is_completed field
    todo.id = len + 1;
    todo.is_completed = 0;

    // write the content to the file
    fprintf(fptr, "%d|%s|%d\n", todo.id, todo.todo_name, todo.is_completed);

    printf("Todo saved successfully!\n");

    // close the file
    fclose(fptr);

    return 0;
}

int show_all_todos() {
    char line[MAX_TODO_TXT_FILE_LINE_LEN];
    todo_t todo;
    int len = find_length();

    FILE *fptr = fopen(TODO_DATABASE, "r");

    if (fptr == NULL) {
        printf("Couldn't open the text file!\n");
        return 1;
    }

    printf("\nAll Todos\n");
    for (int i = 0; i < len; i++) {
        if (fgets(line, MAX_TODO_TXT_FILE_LINE_LEN, fptr) != NULL) {
            sscanf(line, "%d|%[^\n|]|%d", &todo.id, todo.todo_name, &todo.is_completed);

            printf("\nTodo ID: %d\n", todo.id);
            printf("Todo Name: %s\n", todo.todo_name);
            printf("Todo Status: %s\n", todo.is_completed == 1 ? "Completed" : "Not Finished");

            printf("-------------------------\n");
        }
    }
    return 0;
}

int get_todo_by_id() {
    char line[MAX_TODO_TXT_FILE_LINE_LEN];
    int len = find_length();
    int id = 0;
    todo_t todo;
    FILE *fptr = fopen(TODO_DATABASE, "r");
    if (fptr == NULL) {
        printf("Couldn't open the text file\n");
        return 1;
    }

    printf("\nGet Todo By ID\n");

    printf("Enter ID: ");
    scanf("%d", &id);
    while (getchar() != '\n') continue;

    for(int i=0; i<len; i++)
    {
        if(fgets(line, MAX_TODO_TXT_FILE_LINE_LEN, fptr) != NULL)
        {
            sscanf(line, "%d|%[^\n|]|%d", &todo.id, todo.todo_name, &todo.is_completed);
            if(todo.id == id)
            {
                printf("\nTodo ID: %d\n", todo.id);
                printf("Todo Name: %s\n", todo.todo_name);
                printf("Todo Status: %s\n", todo.is_completed == 1 ? "Completed" : "Not Finished");

                fclose(fptr);
                return 0;
            }
        }
    }

    printf("Todo Not Found!\n");
    fclose(fptr);

    return 0;
}

int todo_mark_as_complete() {
    return 0;
}

int delete_todo() {
    return 0;

}