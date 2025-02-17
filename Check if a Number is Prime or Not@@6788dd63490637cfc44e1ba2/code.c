#include<stdio.h>
int main(){
    int a,i;
    int prime=0;
    for(i=2;i<a;i++){
        if(a%i==0){
            prime=1;
        }
    }
    if(prime){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}