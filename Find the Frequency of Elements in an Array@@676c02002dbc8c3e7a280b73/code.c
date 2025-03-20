#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a],count[a];
    for (int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<a;i++){
        if(count[i]==1){
            continue;
        }
        int temp=arr[i];
        int fre=0;
        for (int j=0;j<a;j++){
            if(temp==arr[j]){
                count[j]=1;
                fre+=1;
            }
        }
        printf("%d %d",arr[i];fre);
    }
}