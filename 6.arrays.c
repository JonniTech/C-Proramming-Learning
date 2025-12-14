#include <stdio.h>

int main()
{

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char names[][50] = {"nyaganya", "john", "kelvin", "malima"};

    numbers[0] = 29;

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
    printf("%d\n", numbers[4]);

    printf("\n");

    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    printf("%s\n", names[2]);
    printf("%s\n", names[3]);

    printf("\n");

    for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++)
    {
        printf("Number: %d\n",numbers[i]);
    }


    return 0;
}