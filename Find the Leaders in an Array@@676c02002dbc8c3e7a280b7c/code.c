#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
        if(arr[i+1]<arr[i]){
            printf("%d ",arr[i+1]);
        }
        else{
            continue;
        }
    }
    printf("%d",arr[a-1]);
}