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
                arr[j+1]=temp;
            }
            else{
                continue;
            }
        }
    }
    int count =0;
    for (int i=0;i<a;i++){
        if(arr[i+1]=(arr[i]+1));
        count+=1;
        else{
            continue;
        }

    }
    printf("%d",count);
}