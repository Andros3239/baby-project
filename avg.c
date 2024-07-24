#include<stdio.h>
int main(){
    float number1,number2,number3,avg;

    printf("enter 3 numbers :");
    scanf("%f%f%f",&number1,&number2,&number3);
    avg=number1+number2+number3/3;

    
    printf("answer is :%f",avg);
return 0;
}