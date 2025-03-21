#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
        for(int j=i+1;j<a-1-i;j++){
            if(arr[i]<arr[j]){
                break;
            }
            else{
                continue;
            }
        }
        printf("%d ",arr[i]);
        
    }
    printf("%d",arr[a-1]);
}