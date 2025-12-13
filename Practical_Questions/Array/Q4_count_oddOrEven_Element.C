// 4. Write a C Program to count total number of even and odd elements in ar array.
#include<stdio.h>

int main ()
{
    int countOdd = 0;
    int countEven = 0;
    int n ;

    // input the size of array
    printf("Enter size of arrray : ");
    scanf("%d", &n);

    int arr[n];

    // input the array elements 
    printf("Enter the %d Number of element :- \n", n);
    for(int i = 0; i < n; i++){
        printf("Enter elements : ");
        scanf("%d", &arr[i]);
    }

    // count the even and odd
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            countEven += 1;
        }
        else{
            countOdd += 1; 
        }
    }
    printf("Total odd Number is : %d", countOdd);
    printf("\nTotal even Number is : %d", countEven);
    return 0;
}