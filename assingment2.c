#include<stdio.h>
int main(){
    int p;
    float r,n,si;

    printf("how much money you want :");
    scanf("%d",&p);

    printf("what is your expected interest rate :");
    scanf("%f",&r);

    printf("how much years you have total expected :");
    scanf("%f",&n);

    



    si=p*r*n/100;
    
    printf("you will pay the interest of :%f",si);
return 0;
}