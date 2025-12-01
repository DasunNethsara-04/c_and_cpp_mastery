//
// Created by techs on 9/4/2025.
//

#ifndef C_AND_C__MASTERY_COMMON_H
#define C_AND_C__MASTERY_COMMON_H

#endif //C_AND_C__MASTERY_COMMON_H


#define TODO_DATABASE "todos.txt"
#define MAX_TASK_NAME_LENGTH 100
#define MAX_TODOS 100
#define MAX_TODO_TXT_FILE_LINE_LEN 200

// todo type declaration
typedef struct Todo {
    int id;
    char todo_name[MAX_TASK_NAME_LENGTH];
    int is_completed;
} todo_t;

int find_length();