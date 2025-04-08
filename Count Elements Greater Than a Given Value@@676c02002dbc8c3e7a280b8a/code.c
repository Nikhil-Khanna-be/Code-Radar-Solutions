#include<stdio.h>
int main(){
    int a,k;
    scanf("%d %d",&a,&k);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<a;i++){
        if(arr[i]>k){
            count+=1;
        }
    }
    printf("%d",count);
}