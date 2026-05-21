#include <stdio.h>


void CallByReference();

void CallByReference(int *n)  // 
{
    *n = *n + 30;
//  
    printf("%d\n", &n);  // 30
}



int main()
{
    int n = 20;

    CallByReference(&n);   
    printf("%d\n", n);

    return 0;
}