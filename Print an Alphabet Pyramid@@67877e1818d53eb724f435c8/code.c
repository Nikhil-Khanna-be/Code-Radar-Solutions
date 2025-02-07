#include <stdio.h>

int main() {
    int a,i,j;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for(j=65;j<=(90-26+i);j++){
            printf("%c ",j);
        }
        printf("\n");
    }

    return 0;
}