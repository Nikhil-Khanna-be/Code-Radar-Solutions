#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int arr2[a];
    int b;
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        arr2[i]=arr[a-b+i];
    }
    for(int i=b;i<a;i++){
        arr2[i]=arr[i-b];
    }
    for(int i=0;i<a;i++){
        printf("%d ",arr2[i]);
    }
}
