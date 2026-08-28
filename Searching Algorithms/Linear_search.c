#include <stdio.h>

int main()
{

    int numbers[] = {10, 20, 30, 40, 50, 60};
    int target = 40;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == target)
        {
            printf("Found at index %d\n", i);
            return 0;
        }
    }
    printf("Not found!");

    return 0;
}