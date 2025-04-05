#include <stdio.h>

void dfs(int currI, int currJ, int rows, int cols, char arr[rows][cols])
{
    if (
        currI < 0 ||
        currI >= rows ||
        currJ < 0 ||
        currJ >= cols ||
        arr[currI][currJ] == '0')
        return;

    int list[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    arr[currI][currJ] = '0';

    for (int i = 0; i < 4; i++)
    {
        dfs(currI + list[i][0], currJ + list[i][1], rows, cols, arr);
    }
}

int num_of_islands(int rows, int cols, char arr[rows][cols])
{
    int noi = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == '1')
            {
                noi++;
                dfs(i, j, rows, cols, arr);
            }
        }
    }

    return noi;
}

int main()
{
    char arr[4][5] = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '1'},
        {'1', '1', '1', '0', '1'},
    };

    int numOfIslands = num_of_islands(4, 5, arr);

    printf("Number of Islands: %d\n", numOfIslands);

    return 0;
}