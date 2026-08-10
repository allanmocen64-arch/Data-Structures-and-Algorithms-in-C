#include <stdio.h>
int main()
{
    int numbers[5] = {5, 2, 8, 1, 3};
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array :");
    for (int k = 0; k < size; k++)
    {
        printf("%d ", numbers[k]);
    }

    return 0;
}