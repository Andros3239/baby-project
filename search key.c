#include<stdio.h>
int main(){
    int limit,i,values[100],key,flag;  
    printf("ENTER THE LIMIT :");
    scanf("%d",&limit);
 
    printf(" ENTER THE VALUES :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&values[i]);
    }

    printf("enter the search KEY :");
    scanf("%d",&key);
    for ( i = 0; i < limit; i++)
    {
        if(key==values[i])
        {
            flag=1;
            break;
        }
        
    }
    if (flag==1)
    {
        printf("value found at position : %d",i+1);
    }
    else
    {
        printf(" ....value not found ....");
    }
    
    return 0;
    
    
    
}