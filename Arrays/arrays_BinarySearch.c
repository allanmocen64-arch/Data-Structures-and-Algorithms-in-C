#include <stdio.h>

int main()
{

    int numbers[9] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int size = 9;
    int target;

    int left = 0;
    int right = size - 1;
    int found = -1;

    printf("Enter a number to search: ");
    scanf("%d", &target);

    while (left <= right)
    {
        int middle = (left + right) / 2;
        if (numbers[middle] == target)
        {
            found = middle;
            break;
        }
        else if (target > numbers[middle])
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    if (found != -1)
    {
        printf("Found at index %d\n", found);
    }
    else
    {
        printf("Not found!");
    }

    return 0;
}