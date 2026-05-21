#include<stdio.h>

void printTable(int n)  // parameter / format parameter
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\n", n*i);
    }
}

int main()
{
    int n; 
    printf("Enter the Number to print table : ");
    scanf("%d", &n); // 2
    
    printTable(n);   // arguments / actual parameter

    return 0;
}



