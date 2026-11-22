#include <stdio.h>
/*Challenge i have to create a fonction that tell what costumer order using switch 
 if variable = 1 ,print : You ordered Coffe
 else if variable = 2 , print : You ordered Tea
 else ,print :Inavalid choice*/ 
int main(){

    int choise = 1;//U can change it to 2
    
    //switch fonction
    switch (choise){
        case 1:
            printf("You ordered Coffee");
            break;
        case 2:
            printf("You ordered Tea");
            break;
        default:
        printf("Invalid choice");
    }
    // M2
    //Variables

    int coffee = 1;
    int tea = 2;
    switch (tea){//U can change the expression to coffee
        case 1:
            printf("\nYou ordered Coffee");
            break;
        case 2:
            printf("\nYou ordered tea");
            break;
        default:
            printf("\nInvalid choice");
    }
}