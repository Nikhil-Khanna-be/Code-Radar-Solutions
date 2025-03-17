int isPrime(int);
int isPrime(int x){
    int a=1,b=0;
    if(x=1){
        return b;
    }
    else if(x=2){

        return a;
    }
    else{
        for(int i=2;i<x;i++){
            if(x%i==0){
                continue;
            }
            else{
                
                return a;
            }
        }
        
        return b;
    }
}
