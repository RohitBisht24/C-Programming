#include <stdio.h>
int main()
{
    int a = 50;
    int b = 40;
    int c = 30;

    if(a >= b && a >= c){
        printf("A is Grater.");
    }
    else if(b >= c){
        printf("B is Greater.");
    }
    else{
        printf("C is Greater.");
    }
    return 0; 
}



