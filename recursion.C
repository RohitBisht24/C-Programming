#include<stdio.h>

void printNum(int a )
{
    if(a == 0)
    {
        return;
    }
    printNum(a - 1);
    printf("Num : %d\n", a);
}
int main()
{
    int n;
    printf("Enter the n number to print : ");
    scanf("%d", &n);

    printNum(n);
    return 0; 
}