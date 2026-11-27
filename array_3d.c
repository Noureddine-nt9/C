#include <stdio.h>
//I shoulde printf an array of 3 dimension to look like tabble
int main(){
    int tables[3][2][4]={
        {{2,5,8,9},{12,15,18,19}},
        {{-12,-15,-18,-14},{-1,-5,-8,-9}},
        {{198,287,124,157},{-157,-158,-874,-999}}
    };
    int i,k,j;
    for(i=0;i<3;i++){
        for(k=0;k<2;k++){
            if(k !=0){
                printf("  |  ");//it print it after the first column
            }
            for(j=0;j<4;j++){
                printf("%d ",tables[i][k][j]);
            }
        }printf("\n");//when it start new block it will printf this
    }
    return 0;
}
