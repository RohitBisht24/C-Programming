// 1. Write a C Program to read and print elements of array.
#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the Number of N elements : ");
    scanf("%d", &n);

    int arr[n];     // input a size of array

    // read the array elements
    printf(" Enter the %d number of elements :- \n", n);
    for(int i = 0; i < n; i++){
        printf("Enter elements : ");
        scanf("%d", &arr[i]);
    }

    //print array elements
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}