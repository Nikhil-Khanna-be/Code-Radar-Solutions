int fibonacciSeries(int);
int fibonacciSeries(int n){
    if (n=1){
        printf("%d ",0);
    }
    else if (n=2){
        printf("%d %d",0,1);
    }
    else{
        printf("%d %d ",0,1);
        for(int i=3;i<=n;i++){
            
            printf("%d ",fibonacciSeries(n-1)+fibonacciSeries(n-2));
            
        }
    }
}



