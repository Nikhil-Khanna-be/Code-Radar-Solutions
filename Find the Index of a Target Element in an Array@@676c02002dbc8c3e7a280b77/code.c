#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int b;
    scanf("%d",&b);
    for(int i=0;i<a;i++){
        if(b==arr[i]){
            printf("%d",i);
            return 0;
        }
        else{
            continue;
        }
        
    }
    printf("%d",-1);
    return 0;
}