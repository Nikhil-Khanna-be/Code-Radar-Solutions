#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int arr2[a];
    int count=0;
    int x=0;
    for(int i=0;i<a;i++){
        if(arr[i]==0){
            count+=1;
        }
        else{
            arr2[x]=arr[i];
            x+=1;
        }
    }
    if(count>0){
        for(int i=a-1;i>=a-count;i--){
        arr2[i]=0;
    }
    }
    
    for(int i=0;i<a;i++){
        printf("%d ",arr2[i]);
    }
}