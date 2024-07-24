#include<stdio.h>
int main()
{
    int i,limit,a[100];
    printf("enter the limit :");
    scanf("%d",&limit);


    printf("enter the values :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("entered values are :");

    for ( i = 0; i < limit; i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;

}
 