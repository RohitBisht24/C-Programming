#include <stdio.h>
int main()
{
    int n ;
    int first = 0;
    int second = 1;
    int next;

    printf("Enter the numbe to print fibonacci number : ");
    scanf("%d", &n);

    for(int i=0; i < n; i++ )
    {
        if(i == 0)
        {
            printf(" %d", first);
            continue;
        }
        if(i == 1)
        {
            printf(" %d", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf(" %d", next);
    }
    return 0;
}