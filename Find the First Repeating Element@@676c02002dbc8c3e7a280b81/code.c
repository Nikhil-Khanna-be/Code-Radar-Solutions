#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
        int temp=arr[i];
        for(int j=i+1;j<a;j++){
            if(temp==arr[j]){
                printf("%d",temp);
                return 0;
            }
            else{
                continue;
            }
        }
    }
    printf("%d",-1);
}