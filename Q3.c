#include <stdio.h>

int main()
{
    int num;
    int sum = 0;

    do
    {
        scanf("%d", &num);

        sum = sum + num;

    } while (num != 0);

        printf("%d", sum);
    
}