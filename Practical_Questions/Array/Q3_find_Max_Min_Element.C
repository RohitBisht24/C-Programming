// 3. Write a C program to find maximum and minimum element in an array.
#include<stdio.h>
#include<limits.h>
int main ()
{
    int n;
    int minNum  = INT_MAX;
    int maxNum = INT_MIN;

    printf("Enter the lengh of array : ");
    scanf("%d", &n);

    int arr[n];

    // read array elements
    printf(" Enter the %d Number of elements :-\n", n);
    for(int i = 0; i < n; i++){
        printf("Enter elements : ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }
        if(arr[i] > maxNum){
           maxNum = arr[i];
        }
    }
    printf("Maximum elements is : %d", maxNum);
    printf("\nMinimum elements is : %d", minNum);
    return 0;    
}