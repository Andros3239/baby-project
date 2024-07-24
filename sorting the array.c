#include<stdio.h>
int main(){

    int a,i,j,values[100],temp;
    printf("enter the limit: ");
    scanf("%d",&a);
    printf("enter the values :");
    for (i = 0; i<a; i++)
    {
        scanf("%d",&values[i]);
    }


    for (i = 0; i <a-1; i++)
    {
        for ( j=i+1; j<a; j++)
        {
            if (values[i]>values[j])
            {
                temp=values[i];
                values[i]=values[j];
                values[j]=temp;                
            }   
        }
    }

    printf("sorted values :");
        for ( i = 0; i < a; i++)
        {
            printf("%d\t",values[i]);
        }

    return 0;
}