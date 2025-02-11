// Your code here...
#include<stdio.h>
int main(){
    int a,i,j,k;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        if ((i==1)||(i==a)){
            for (j=1;j<=a;j++){
                printf("*");
            }
        }
        else{
            for (k=1;k<=a;k++){
                if((k==1)||(k==a)){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}