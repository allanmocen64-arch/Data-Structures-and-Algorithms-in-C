#include <stdio.h>
int main()
{
    int numbers[10] = {5, 15, 25, 35, 45};
    int size = 5;

    int position;
    int value;

    printf("Enter number to insert : ");
    scanf("%d", &value);
    printf("Enter the position : ");
    scanf("%d", &position);

    for (int i = size; i > position; i--)
    {
        numbers[i] = numbers[i - 1];
    }
    numbers[position] = value;
    size++;
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
