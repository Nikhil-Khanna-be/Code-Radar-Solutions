#include<stdio.h>
int main(){
    int a,i,j,k,x;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for (j=1;j<=(a-i);j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        // for (x=1;x<=(i-)){
        //     printf("%d",x);
        // }
        printf("\n");
    }
}