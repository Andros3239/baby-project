#include <stdio.h>
int main(){

    float mark;
    float num1=50;
    
    

    printf("enter your marks  :");
    scanf("%f",&mark);
    if (mark>=num1)

    {
        printf("you are pass you have %f",mark);
    }
    else
    {
        printf("you are fail you only have %f", mark);
    }
    return 0;
    

}