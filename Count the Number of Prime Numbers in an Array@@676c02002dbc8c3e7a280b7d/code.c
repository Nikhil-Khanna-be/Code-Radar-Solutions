#include<stdio.h>
int prime(int);
int prime(int x){
    int ab=0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            break;
        }
        else{
            ab+=1;
        }
        
    }
    if(ab==(x-3)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int count=0;
    
    for(int i=0;i<a;i++){
        if(prime(arr[i])=1){
            count+=1;
        }
        else{
            continue;
        }
    }
    printf("%d",count);
    return 0;
}