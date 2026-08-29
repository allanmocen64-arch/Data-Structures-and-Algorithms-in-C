#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int numbers[] = {5, 8, 12, 14, 15, 19, 20, 25, 29, 32};
    int result = binarySearch(numbers, 10, 19);
    printf("Result: %d", result);

    return 0;
}