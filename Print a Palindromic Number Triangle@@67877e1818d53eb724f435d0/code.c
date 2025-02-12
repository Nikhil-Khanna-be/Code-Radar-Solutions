#include<stdio.h>
int main(){
    int a,i,j,k,l;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for (j=1;j<=(a-i);j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        for(l=1;l<=(i-1);l++){
            printf("%d",i-l);
        }
        printf("\n");
    }
}