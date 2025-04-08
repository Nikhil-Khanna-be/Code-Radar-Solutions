#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<a;i++){
        int sum=0;
        while(arr[i]){
            sum+=(arr[i]%10);
            arr[i]=arr[i]/10;
        }
        printf("%d ",sum);
    }
}