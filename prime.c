#include<stdio.h>
int main()
{
    int i,flag=0,count;
    printf(" enter a number that you  want check :");
    scanf("%d",&count);
    for ( i = 2; i < count/2; i++)
    {
        if (count%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf(" is a prime number ");
    }
    else{
        printf("  not a prime number ");
    }
    return 0;
    

}