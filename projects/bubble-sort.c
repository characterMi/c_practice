#include <stdio.h>

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {9, 1, 3, 5, 7, 2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(int);
    bubble_sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}