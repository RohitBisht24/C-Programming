//for    while   do while
#include <stdio.h>
int main()
{
    int n;
    // int i = 1;
    do
    {
        // user input
        printf("Enter the number : ");
        scanf("%d", &n);   //
        printf("%d\n", n);

        if(n%3 == 0){   
            break;
        }

    }while(1);
    printf("thank you");
    return 0;
}