#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int x;
    if(a%2==0){
        x=a/2;
        printf("%d",(arr[x-1]+arr[x])/2);
    }
    else{
        x=(a+1)/2;
        printf("%d",arr[x-1]);
    }
    
}