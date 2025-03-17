int isPrime(int);
int isPrime(int x){
    int a=1,b=0;
    if(x=1){
        printf("%d",b);
    }
    else if(x=2){
        printf("%d",a);
    }
    else{
        for(int i=2;i<x;i++){
            if(x%i==0){
                continue;
            }
            else{
                printf("%d",a);
                return 0;
            }
        }
        printf("%d",b);
        return 0;
    }
}
