// 5. Write a C Program to count total Number os negative elements in an arrays.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n ;
    int count = 0;
    
    // input the size of array
    printf("Enter the size of elements : ");
    scanf("%d", &n);
 
    int arr[n];

    // input the array elements
    printf("Enter the %d Number of elements : \n", n);
    for(int i = 0; i < n; i++){
        printf("Enter elements : ");
        scanf("%d", &arr[i]);
    }
    // count the nagetive Number in array elements
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            count += 1;
        }
    }
    printf("Total Nagetive Number of elements is : %d", count);
    return 0;
}