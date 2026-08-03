#include <stdio.h>
int main()
{
    // finding average marks
    /*int marks[5] = {70, 82, 91, 65, 88};
    float average = 0;
    for (int i = 0; i < 5; i++)
    {
        average += marks[i] / 5.0;
        }
    printf("%f\n", average);*/

    // printing only even numbers
    int numbers[6] = {8, 13, 20, 7, 14, 10};
    int even = 0;
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("%d\n", numbers[i]);
        };
    }

    return 0;
}
