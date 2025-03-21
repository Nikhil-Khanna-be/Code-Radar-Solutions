#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
        int count=0;
        for(int j=i+1;j<a-i;j++){
    
            if(arr[i]<arr[j]){
                break;
            }
            else{
                count+=1;
            }
        }
        if(count==a-i-1){
            printf("%d ",arr[i]);
        }
        
    }
    printf("%d",arr[a-1]);
}