#include <stdio.h>
int main(){

    int choice;

    printf("     evide ippa kazhikan ayyitt \n1  poratta and beef unnd \n2  biriyani unnd \n3  fried rice  unnd \n4  mandhi unnd \n5 chorum karrium unnd \n6     monn entha vendde :");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        printf("appo poratte beef um edukalle");
        break;
        case 2:
        printf("appo biriyani edukalle");
        break;
        case 3:
        printf("appo fried rice edukalle");
        break;
        case 4:
        printf("appo mandhi edukalle");
        break;
        printf("appo chorum karrium edukalle");
        break;
        default :
        printf("  ......mell paranja sadhanam evide ella......");
       
    }

    return 0;

}
    