int fibonacciSeries(int);
int fibonacciSeries(int n){
    int a=0,b=1,next;
    if (n>=1){
        printf("%d ",a);
    }
    else if (n>=2){
        printf("%d ",b);
    }
    else{
        
        for(int i=3;i<=n;i++){
            next=a+b;
            printf("%d ",next);
            a=b;
            b=next;
        }
    }
}
