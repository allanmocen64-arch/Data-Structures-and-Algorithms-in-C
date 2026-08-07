#include <stdio.h>
int main()
{
    int numbers[10] = {10, 20, 30, 40, 50};
    int size = 5;

    int position = 2;

    for (int i = position; i < size; i++)
    {
        numbers[i] = numbers[i + 1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}