#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define MAX_ROWS 3
#define MAX_COLS 3
#define PLAYER 'x'
#define COMPUTER 'O'

char board[MAX_ROWS][MAX_COLS];

void reset_board();
void print_board();
int check_free_space();
void player_move();
void computer_move();
char check_winner();
void print_winner(char);

int main()
{
    char winner = ' ';

    reset_board();

    while (winner == ' ' && check_free_space() != 0)
    {
        print_board();

        player_move();
        winner = check_winner();
        if (winner != ' ' || check_free_space() == 0)
            break;

        computer_move();
        winner = check_winner();
        if (winner != ' ' || check_free_space() == 0)
            break;
    }

    print_board();
    print_winner(winner);

    return 0;
}

void reset_board()
{
    for (int i = 0; i < MAX_ROWS; i++)
    {
        for (int j = 0; j < MAX_COLS; j++)
        {
            board[i][j] = ' ';
        }
    }
};

void print_board()
{
    printf("\n");
    printf(" %c | %c | %c \n"
           "---+---+---\n"
           " %c | %c | %c \n"
           "---+---+---\n"
           " %c | %c | %c \n",
           board[0][0], board[0][1], board[0][2], board[1][0], board[1][1], board[1][2], board[2][0], board[2][1], board[2][2]);
    printf("\n");
};

int check_free_space()
{
    int free_spaces = MAX_COLS * MAX_ROWS;

    for (int i = 0; i < MAX_ROWS; i++)
    {
        for (int j = 0; j < MAX_COLS; j++)
        {
            if (board[i][j] != ' ')
            {
                free_spaces--;
            }
        }
    }

    return free_spaces;
};

void player_move()
{
    int x, y;

    do
    {
        printf("Enter row #(1-3): ");
        scanf("%d", &x);
        --x;

        printf("Enter col #(1-3): ");
        scanf("%d", &y);
        --y;

        if (board[x][y] != ' ')
        {
            printf("Invalid move!");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
};

void computer_move()
{
    if (check_free_space() > 0)
    {
        srand(time(0));

        int x, y;

        do
        {
            x = rand() % MAX_ROWS;
            y = rand() % MAX_COLS;

        } while (board[x][y] != ' ');

        board[x][y] = COMPUTER;
    }
    else
    {
        print_winner(' ');
    }
};

char check_winner()
{
    // check rows
    for (int i = 0; i < MAX_ROWS; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return board[i][0];
        }
    }

    // check cols
    for (int i = 0; i < MAX_COLS; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return board[0][i];
        }
    }

    // check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return board[1][1];
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return board[1][1];
    }

    return ' ';
};

void print_winner(char winner)
{
    switch (winner)
    {
    case PLAYER:
        printf("YOU WON!");
        break;
    case COMPUTER:
        printf("YOU LOSE!");
        break;
    default:
        printf("IT'S A TIE!");
        break;
    }
};