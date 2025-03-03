#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char question[100];
    char answer[20];
} QuizOptionPhase1;

typedef struct
{
    char a[25];
    char b[25];
    char c[25];
    char d[25];
} Options;

typedef struct
{

    char question[100];
    char answer;
    Options options;
} QuizOptionPhase2;

int first_game()
{
    QuizOptionPhase1 firstQuiz = {"What year was the first computer invented?", "1954"};
    QuizOptionPhase1 secondQuiz = {"What is the name of the first computer programmer?", "Ada Lovelace"};
    QuizOptionPhase1 thirdQuiz = {"What year did the C language debut?", "1972"};

    const QuizOptionPhase1 questions[] = {firstQuiz, secondQuiz, thirdQuiz};
    int score = 0;

    printf("Welcome to the first round of the quiz game!\n");
    printf("Please answer the following questions:\n\n");

    for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++)
    {
        char user_answer[20];
        printf("%d. %s\n", i + 1, questions[i].question);
        fgets(user_answer, 20, stdin);

        printf("\n");
        if (strcmpi(user_answer, questions[i].answer) == 10)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Incorrect!\n");
        }
        printf("\n");
    }

    printf("*************************************\n");
    printf("You got %d out of %d questions correct!\n", score, sizeof(questions) / sizeof(questions[0]));
    printf("*************************************\n\n");

    return score;
}

void second_game()
{
    QuizOptionPhase2 firstQuiz = {
        "Which method should we use to find the length of a string?",
        'A',
        {"A. strlen", "B. strcpy", "C. strcmp", "D. strlwr"}};
    QuizOptionPhase2 secondQuiz = {
        "Who is credited with creating C?",
        'D',
        {"A. Doc Brown", "B. Nikola Tesla", "C. John Carmack", "D. Dennis Ritchie"}};
    QuizOptionPhase2 thirdQuiz = {
        "What is the predecessor of C?",
        'B',
        {"A. Objective C", "B. B", "C. C#", "D. C++"}};

    const QuizOptionPhase2 questions[] = {firstQuiz, secondQuiz, thirdQuiz};
    int score = 0;

    printf("Welcome to the second round of the quiz game!\n");
    printf("Congratulations for passing the first quiz!\n");
    printf("Please answer the following questions by choosing the correct answer (a/b/c/d): \n\n");

    for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++)
    {
        char answer;

        printf("%d.%s\n\n", i + 1, questions[i].question);
        printf("%s\n", questions[i].options.a);
        printf("%s\n", questions[i].options.b);
        printf("%s\n", questions[i].options.c);
        printf("%s\n\n", questions[i].options.d);
        scanf("%c", &answer);

        if (tolower(answer) == tolower(questions[i].answer))
        {
            printf("\nAwesome! You got it right!\n\n");
            score++;
        }
        else
        {
            printf("\nOops! You got it wrong!\n\n");
        }
        scanf("%c"); // clear \n from input buffer.
    }

    printf("*************************************\n");
    printf("You got %d out of %d questions correct!\n", score, sizeof(questions) / sizeof(questions[0]));
    printf("*************************************\n");
}

int main()
{
    int result = first_game();

    if (result >= 2)
    {
        second_game();
    }
    else
    {
        printf("Oops, You didn't pass the first quiz!");
    }

    return 0;
}