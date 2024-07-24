#include <stdio.h>
int main(){

    float marks;



    printf("enter your total mark percentage : ");
    scanf("%f",&marks);

    if (marks >=90){


        printf("grade : A\n");
        }
        else if (marks >=80){
        printf("grade : B\n");
        }
        else if (marks >=70){
        printf("grade : C\n");
        }
        else if (marks >=60){
        printf("grade : D\n");
        }
        else if (marks >=50){
        printf("grade : E\n");
        }
        else {


            printf("grade : .... RE-APPEAR ...\n");

        }

    return 0;
}
        
        

