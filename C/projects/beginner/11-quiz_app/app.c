//
// Project 11 - Mini Quiz App (multiple-choice in CLI)
// Created by Dasun Nethsara on 7/27/25.
//

#define MAX_QUESTIONS 10
#define MAX_QUESTION_TEXT_LEN 150
#define MAX_ANSWER_OPTIONS 4
#define MAX_ANSWER_TEXT_LEN 100

#include <stdio.h>
#include <string.h>

// arrays for save questions and answers
char questions[MAX_QUESTIONS][MAX_QUESTION_TEXT_LEN] = {
    "Who is the president of USA?",
    "How many oceans in the world?",
    "What is the 4th letter of the Greek alphabet?",
    "How many elements are in the periodic table?",
    "Which planet in the Milky Way is the hottest?",
    "Which planet has the most moons?",
    "Where did sushi originate?",
    "What is the largest mammal in the world?",
    "Who is the king of the gods in Greek mythology?",
    "Which planet is known as the “Blue Planet”?",
};

char answers[MAX_QUESTIONS][MAX_ANSWER_OPTIONS][MAX_QUESTION_TEXT_LEN] = {
    {"Donald Trump",
     "Joe Biden",
     "Tony Stark",
     "Steve Rogers"},

    {"2",
     "4",
     "5",
     "6"},

    {"Alpha",
     "Gamma",
     "Delta",
     "Omega"},

    {"118",
     "154",
     "100",
     "60"},

    {"Earth",
     "Pluto",
     "Venus",
     "Mars"},

    {"Jupiter",
     "Saturn",
     "Venus",
     "Mercury"},

    {"USA",
     "Japan",
     "India",
     "UAE"},

    {"Blue whale",
     "Lion",
     "Elephant",
     "Dog"},

    {"Thor",
     "Zeus",
     "Odin",
     "Loki"},

    {"Earth",
     "Pluto",
     "Venus",
     "Mars"},
};

int correct_ans[MAX_QUESTIONS] = {1, 3, 3, 1, 3, 2, 2, 1, 2, 1};

int main()
{
    int marks = 0, choice;

    printf("Simple Quiz App\n");
    // display questions
    for (int i = 0; i < MAX_QUESTIONS; i++)
    {
        printf("\n%d. %s\n\n", i + 1, questions[i]);

        // display answers
        for (int j = 0; j < MAX_ANSWER_OPTIONS; j++)
        {
            printf("%d. %s\n", j + 1, answers[i][j]);
        }

        printf("\nYour Answer (1, 2, 3, 4): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            if (correct_ans[i] == choice)
                marks++;
        }
        else
        {
            printf("Invalid Answer");
        }
    }
    printf("\nQuiz Over!\n");
    printf("Your Results: %d/10\n", marks);
}