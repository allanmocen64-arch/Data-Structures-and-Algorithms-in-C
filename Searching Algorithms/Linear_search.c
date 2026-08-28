#include <stdio.h>

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int scores[] = {45, 72, 81, 63, 90};
    int result = linearSearch(scores, 5, 81);

    if (result != -1)
    {
        printf("Found at index %d\n", result);
    }
    else
    {
        printf("Not Found!\n");
    }

    return 0;
}