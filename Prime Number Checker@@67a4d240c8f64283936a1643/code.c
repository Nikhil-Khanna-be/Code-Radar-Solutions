int isPrime(int);
int isPrime(int a){
    if(a=1){
        printf("d",0);
    }
    else if(a=2){
        printf("%d",1);
    }
    else{
        for(int i=2;i<a;i++){
            if(a%i==0){
                continue;
            }
            else{
                printf("%d",1);
                return 0;
            }
            printf("%d",0);
        }
    }
}
