//
// Created by Dasun Nethsara on 8/28/2025.
//

#include <stdio.h>
#include "utils/common.h"
#include "utils/todo.h"

int main() {
    while (1) {
        int choice = 0;

        printf("\nTodo App\n");

        printf("Choose a operation to continue.\n");
        printf("1. Add Todo\n");
        printf("2. Show all Todos\n");
        printf("3. Get Todo by ID\n");
        printf("4. Mark as completed\n");
        printf("5. Delete Todo\n");
        printf("6. Exit\n");

        printf("\nEnter Choice: \n");
        scanf("%d", &choice);

        while (getchar() != '\n')
            continue;

        switch (choice) {
            case 1:
                add_todo();
                break;
            case 2:
                show_all_todos();
                break;
            case 3:
                get_todo_by_id();
                break;
            case 4:
                todo_mark_as_complete();
                break;
            case 5:
                delete_todo();
                break;
            case 6:
                printf("\nGood Bye!\n");
                return 0;
            default:
                printf("\nInvalid Command\n");
                continue;
        }
    }
}