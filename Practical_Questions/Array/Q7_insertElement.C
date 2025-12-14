// 7. Write a C Program to insert an element in an array.
#include<stdio.h>
int main()
{
    int n, posi, value;
    printf("Enter size of elements : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the %d number of elements (0-indexing):\n", n);
    for(int i = 0; i < n; i++){
        printf("Enter element at index %d : ",i);
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (0-based) : ");
    scanf("%d", &posi);

    printf("Enter value to insert : ");
    scanf("%d", &value);

    if(posi < 1 || posi > n+1){
        printf("Invalid Position! Position must be between 1 and %d\n", n + 1);
        return 0; 
    }

    for(int i = n; i >= posi; i--){
        arr[i] = arr[i - 1];    // shirft element right
    }

    arr[posi - 1] = value;   // insert new element
    n++;                    // new size 

    printf("Array after insertion : ");
    for(int i = 0; i < n ; i ++){
        printf("% d", arr[i]);
    }
    printf("/n");
    return 0 ;
}
