#include <stdio.h>
//challenge : chek if age >=18 usong bool and if.else
#include <stdbool.h>
int main(){
    int age_p1 = 17;
    bool first_p = age_p1>=18;//1 if the condition is true
    //Methode 1
    if (first_p){
        printf("Allowed for p1");
    }else{
        printf("Not allowed for p1");
    }
    int age_p2 = 18;
    bool second_p = age_p2 >=18;
    //Methose 2
    (second_p) ? printf("\nAllowed for p2") : printf("\nNot allowed for p2");
    return 0;

}
