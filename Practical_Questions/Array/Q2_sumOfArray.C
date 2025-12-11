// 2. Write a C program to find sum of all arrays elements.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, sum ;
    sum = 0;
    printf("Enter the Size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the %d Number of elements :- \n", n);
    for(int i = 0 ; i<n; i++){
        printf("Enter elements : ");
        scanf("%d", &arr[i]);
    }

    //sum of all array elements
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf(" the Sum of array elements is : %d", sum);
    return 0;
}