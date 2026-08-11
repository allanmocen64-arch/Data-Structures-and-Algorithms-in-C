#include <stdio.h>

int main()
{

    int numbers[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int left = 0;
    int right = size - 1;
    int temp = numbers[left];

    while (left < right)
    {
        temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;
        left++;
        right--;
    }
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}