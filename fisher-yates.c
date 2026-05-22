#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int array[], int n);

int main()
{
    srand(time(NULL));

    int n;

    do
    {
        printf("Enter the length of array: ");

        if (scanf("%d", &n) != 1)
        {
            printf("Invalid input!\n");
            return 1;
        }

    } while (n < 3);

    int *numbers = malloc(sizeof(int) * n);

    if (numbers == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nUnshuffled sequence: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    shuffle(numbers, n);

    printf("\nShuffled sequence: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    free(numbers);

    return 0;
}

void shuffle(int array[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);

        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}