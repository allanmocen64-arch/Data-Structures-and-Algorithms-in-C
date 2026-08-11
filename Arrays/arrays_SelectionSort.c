#include <stdio.h>

int main()
{
    int numbers[5] = {7, 3, 9, 2, 5};
    int size = 5;

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (numbers[j] < numbers[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }
    for (int k = 0; k < size; k++)
    {
        printf("%d ", numbers[k]);
    }

    return 0;
}
