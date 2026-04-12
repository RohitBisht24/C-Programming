#include <stdio.h>
int main()
{
    int a , b;
    char perform, choice;

    do
    {
        printf("Enter the first Number : ");
        scanf("%d", &a);

        printf("Enter the second Number : ");
        scanf("%d", &b);

        printf("Enter the operator (+, -, *, /, %%) : ");
        scanf(" %c", &perform);

        switch(perform){
            case '+' : printf("result : %d", a + b);
                        break;
            case '-' : printf("result : %d", a - b);
                        break;
            case '*' : printf("result : %d", a * b);
                        break;
            case '/' : if(b != 0){
                        printf("result : %d", a / b);
                        }else{
                            printf("Division by zero error!");
                        }
                        break;
            case '%' : if(b != 0){
                        printf("result : %d", a % b);
                        }else{
                            printf("Division by zero error!");
                        }
                        break;
            default : printf("Invalid Operator.");
        }
        printf("\nCalculate again? (y/n) : ");
        scanf(" %c", &choice);

    }while(choice == 'y');

    return 0;
}