#include<stdio.h>

int fibonacciSeries(int);
int fibonacciSeries(int n){
    if(n=1){
        printf("%d ",0);
    }
    else if(n=2){
        printf("%d ",1);
    }
    else{
        printf("%d ",fibonacciSeries(n-1)+fibonacciSeries(n-2));
    }
}


int main(){
    int n;
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);

    return 0;
}

