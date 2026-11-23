#include <stdio.h>
//in this function we will print from 1 to 5 using for and then i add a loop inside loop(nested loop)
int main(){
    for(int i=1;i<=5;i++){
        printf("%d\n",i);
    }// the first loop
    printf("\n");
    //nested loop
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("%d",i * j);
        }
        printf("\n");
    }
    return 0;
}
