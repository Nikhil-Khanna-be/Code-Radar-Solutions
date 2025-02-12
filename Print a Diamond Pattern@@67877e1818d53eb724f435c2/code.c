#include <stdio.h>

int main() {
    int a,i,j,k,x,y,z;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for (j=1;j<=a-i;j++){
            printf(" ");
        }
        for(k=1;k<=((2*i)-1);k++){
            printf("*");
        }
        printf("\n");
    }
    for (x=1;x<a;x++){
        for(y=1,y<=x;y++){
            printf(" ");
        }
        for(z=1;z<=((2*(a-x))-1);z++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}