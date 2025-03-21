#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            if(arr[j]<arr[j+1]){
                continue;
            }
            else{
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<a;i++){
        if(arr[a-i-1]%2==0){
            printf("%d",arr[i]);
            return 0;
        }
        else{
            continue;
        }
    }
    printf("%d",-1);
}