#include<stdio.h>

void check(int a)  
{
    a = a + 10;  // 50 + 10 = 60
    printf("user Function : %d\n", a);
}


int main()
{
    int a = 50;

    check(a);

    printf(" main Function : %d\n", a);   

}
