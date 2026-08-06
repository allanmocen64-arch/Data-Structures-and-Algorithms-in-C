#include <stdio.h>
int main()
{

    // printing only even numbers
    /*int numbers[6] = {8, 13, 20, 7, 14, 10};
    int even = 0;
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("%d\n", numbers[i]);
        };
    }
        */

    // printing largest and smallest numbers
    int numbers[10] = {40, 58, 74, 60, 54, 50, 73, 43, 65, 70};
    int largest = numbers[0];
    int lowest = numbers[0];
    int sum = 0;
    int average = 0;

    for (int i = 1; i < 10; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }
    for (int i = 1; i < 10; i++)
    {
        if (numbers[i] < lowest)
        {
            lowest = numbers[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        sum += numbers[i];
    }
    for (int i = 0; i < 10; i++)
    {
        average = sum / 10;
    }

    printf("Largest : %d\n", largest);
    printf("lowest : %d\n", lowest);
    printf("sum : %d\n", sum);
    printf("Average: %d", average);

    return 0;
}
