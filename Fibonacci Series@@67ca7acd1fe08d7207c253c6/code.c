#include<stdio.h>



int main(){
    int n;
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        if(n=1){
            printf("%d ",a);
        }
        else if(n=2){
            printf("%d ",b);
        }
        else{
            printf("%d ",a+b);
        }
        a=b;
        b=a+b;

    }

    return 0;
}

