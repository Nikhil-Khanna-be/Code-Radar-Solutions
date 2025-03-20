#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int count=0;
    for(int i=0;i<a;i++){
        if(arr[i]!=0){
            continue;
        }
        else{
            for(int j=0;j<a-1;j++){
                arr[j]=arr[j+1];
            }
            count+=1
        }
    }
    for(int i=0;i<count;i++){
        arr[a-i-1]=0;
    }
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
}