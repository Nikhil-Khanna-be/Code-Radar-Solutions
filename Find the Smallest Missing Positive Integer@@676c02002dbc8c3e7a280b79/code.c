#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            if(arr[j]<arr[j+1]){
                continue;
            }
            else{
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<a-1;i++){
        if(arr[i]<0){
            continue;
        }
        else{
            if(arr[i+1]=arr[i]+1){
                continue;
            }
            else{
                printf("%d",arr[i]+1);
                return 0;
            }
        }
    }
    while(true){
        if(arr[a-1]+1>0){
            printf("%d",arr[a-1]+1);
            break;
        }
        else{
            (arr[a-1]+1)+=1;
        }
    }
    return 0;
}