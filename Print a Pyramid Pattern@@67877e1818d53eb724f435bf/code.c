#include <stdio.h>

int main() {
    int a,i,j,k;
    scanf("%d",&a);
    for(k=1;k<=a;k++){
        for (i=1;i<=((2*k)-1);i++){
            for (j=1;j<=(a-i);j++){
                printf(" ");
            }
            printf("*");

        }
        printf("\n");
    }
    return 0;
}