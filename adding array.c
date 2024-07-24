#include<stdio.h>
int main()
{
    int i,sum=0,limit,a[100];
    printf("enter the limit :");
    scanf("%d",&limit);


    printf("enter the values :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < limit; i++)
    {
        sum=sum+a[i];
    }
    
    printf("entered values sum is  :%d",sum);

    return 0;
}