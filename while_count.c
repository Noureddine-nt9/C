#include <stdio.h>
//Print from 1 to 5 using do/while the while
int main(){
    int count=1;
    do{
        printf("%d\n",count);
        count++;
    }while(count <= 5);
    //M2:
    int i = 1;
    while(i <= 5){
        printf("%i\n",i);
        i++;
    }
    return 0;
}