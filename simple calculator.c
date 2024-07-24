#include <stdio.h>
int main(){

    int number1,number2,choice,result;

    printf("enter two numbers  :");
    scanf("%d%d",&number1,&number2);
    printf("1 for addition \n2 for subtraction \n3 for multipication \n4 for division  \n5   enter your choice ? ");
    scanf("%d",&choice);
    if (choice==1)
    {
        result=number1+number2;
    }
    else if (choice==2)
    {
        result=number1-number2;
    }
    else if (choice==3)
    {
        result=number1*number2;
    }
    else if (choice==4)
    {
        result=number1/number2;
    }
    else{
        printf("... kalla myra ...");
    }
    printf("result=%d",result);


    return 0;
}
    