#include <stdio.h>
//Fonction that print a countdown for 3 to 1  and if countdown = 1 it will printf a different message!
int main(){
    int countdown = 3;
    while (countdown >= 1){
        (countdown == 1) ? printf("%i ,GO!",countdown) : printf("%d\n",countdown);
        //(condition) ? expression if conditon is true : expression if conditon is false;
        countdown--;

    }
    return 0;
} 