#include <stdio.h>
int main()
{
    int i, n;
    // take user input
    printf("Enter the Number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%d\n", i);
    }
    return 0;
}