#include <stdio.h>
int main(){
    int rows = 5;
    for(int i=0;i<rows;i++){
        int num = 1;
        for(int j=1;j<rows-i;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",num);
            num = num * (i-j) / (j+1);
        }
        printf("\n");
    }
    return 0;
}