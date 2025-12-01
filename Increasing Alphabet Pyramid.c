#include <stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(char c='A';c<='A'+(4-i);c++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}