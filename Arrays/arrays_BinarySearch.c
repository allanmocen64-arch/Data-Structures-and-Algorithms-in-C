#include <stdio.h>

int main()
{

    int numbers[9] = {1, 3, 5, 7, 9, 13, 15, 17};
    int size = 9;
    int target = 15;

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int middle = (left + right) / 2;
        if (numbers[middle] == target)
        {
            printf("Found at index %d\n", middle);
            break;
        }
        else if (target > numbers[middle])
        {
            left = middle + 1;
        }
        else
        {
            left = middle - 1;
        }
        }

    return 0;
}