// 7. Write a C Program to insert an element in an array.
#include<stdio.h>
int main()
{
    int n, posi, value, i;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d Number of elements : \n", n);
    for(i = 1; i <= n; i++){
        printf("Enter element at index %d", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1-based): ");
    scanf("%d", &posi);

    printf("Enter value to insert : ");
    scanf("%d", &value);

    if(posi < i || posi > n + 1){
        printf("Invalid position! Position must be between 1 and %d\n", n+1);
        return 0;
    }

    for(i = n; i >= posi; i--){
        arr[i] = arr[i - 1];
    }

    arr[posi - 1] = value;
    n++;

    printf("Array after insertion : \n");
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}




    // // Shift elements to the right
    // for (i = n; i >= pos; i--) {      (i = 4; i >= 2; i--)
    //     arr[i] = arr[i - 1];
    // }

    // // Insert element
    // arr[pos - 1] = element;
    // n++;
