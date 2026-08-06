#include <stdio.h>
int main()
{

    int numbers[6] = {20, 46, 35, 13, 56, 57};
    int target = 57;
    int found = 0;

    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == target)
        {
            found = 1;
            printf("Found at index %d", i);
            break;
        }
    }

    if (found == 0)
    {
        printf("Not Found!");
    }

    return 0;
}