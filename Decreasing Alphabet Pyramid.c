#include <stdio.h>
int main(){
    for(int i=4;i>=1;i--){
        for(char c='A';c<'A'+i;c++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}