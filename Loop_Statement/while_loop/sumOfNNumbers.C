#include <stdio.h>
int main()
{
    int i ,n;
    int sum = 0;

    //user input
    printf("Enter the number : ");
    scanf("%d", &n);  // n

    for(i = 1; i<=n; i++)
    {
        sum = sum + i;     // sum += i;
        printf("%d\n", sum);
    }
    return 0;
}