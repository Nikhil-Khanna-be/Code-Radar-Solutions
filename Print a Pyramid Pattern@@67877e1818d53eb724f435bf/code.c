#include <stdio.h>

int main() {
    int a,i,j,k;
    scanf("%d",&a);
    for (k=1;k<=a;k++){
        for(i=1;i<=((2*k)-1);k++){
            if((i==a)||(i==a-k)){
                printf(" ");
            }
            else{
                printf("*");
            }
        printf("\n");
        }
    }
    return 0;
}