#include <stdio.h>
int main()
{
    int physics,math,bio,chem,english;

    printf("Physics's marks : ");
    scanf("%d", &physics);

    printf("Math's marks : ");
    scanf("%d", &math);

    printf("Bio's marks : ");
    scanf("%d", &bio);

    printf("Chem's marks : ");
    scanf("%d", &chem);

    printf("English's marks : ");
    scanf("%d", &english);

    int total = physics+math+bio+chem+english;

    float percentage= (total/5.0);     // 72.9%

    printf("Total marks are : %d\n", total);
    
    printf("Percentage of marks is : %.2f", percentage);

    return 0;

}   