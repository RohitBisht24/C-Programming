// 6. Write a C program to copy all elements form as array to another array.
#include<stdio.h>
int main()
{
    int n ;
    printf( "Enter the Size of array  : ");d
    scanf("%d", &n);

    int arr[n];
    int j  = 0;
    int copyarr[n];   // copy array

    // input array elements for user
    printf("Enter Number %d elements :- \n", n);
    for(int i = 0; i < n; i++){
        printf("Enter element : ");
        scanf("%d", &arr[i]);
    }

    // copy and  pested array elements to another array.
    for(int i = 0; i < n; i++){
        copyarr[j++] = arr[i];
        printf(" %d", copyarr[i]);
    }
    return 0;
}
