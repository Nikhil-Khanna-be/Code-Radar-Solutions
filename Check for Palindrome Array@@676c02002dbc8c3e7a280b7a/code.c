#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int arr2[a];
    for(int i=0;i<a;i++){
        arr2[i]=arr[a-i-1];

    }
    for(int i=0;i<a;i++){
        if(arr[i]==arr2[i]){
            continue;
        }
        else{
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
