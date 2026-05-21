#include <stdio.h>

// number reverse Function
int ReverseFunction(int num)
{
    int reverse, remainder;
    while(num > 0)
    {
        remainder = num % 10;
        reverse = (reverse*10) + remainder;
        num = num/10;

    }
    return reverse;
}

// find factorial of N number
int FactorialFunction(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    return fact;
}

// count Digit
int DigitsFunction(int num)  // 0
{
   int count = 0;
   
   while(num > 0)
   {
        num = num/10;   
        count++;   // 3
   }
   return count ;

}

// sum of n number
int SumFunction(int num)
{
   int sum = 0;

   for(int i = 0; i<= num; i++)
   {
      sum = sum + i;
   }
   return sum;
}

int main()
{
    int num;
    int result1 , result2, result3, result4;

    printf("Enter a number. : ");
    scanf("%d", &num);

    result1 = ReverseFunction(num);
    printf(" Reverse is = %d\n", result1);

    result2 = FactorialFunction(num);
    printf("Factorial is = %d\n", result2);

    result3 = DigitsFunction(num);
    printf("Number of Digits are = %d\n", result3);

    result4 = SumFunction(num);
    printf("Sum of Number is = %d\n", result4);
    
    return 0;
}





