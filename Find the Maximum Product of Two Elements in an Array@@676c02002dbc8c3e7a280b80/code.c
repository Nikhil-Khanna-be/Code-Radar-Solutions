#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
            }
        }
    }
    int x=arr[a-1]*arr[a-2];
    int y=arr[0]*arr[1];
    if(x>y){
        printf("%d",x);
    }
    else{
        printf("%d",y);
    }
}