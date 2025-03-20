#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&arr[i]);
    }
    int count=0;
    
    for(int i=0;i<a;i++){
        if(arr[i]==1||arr[i]==2){
            count+=1;
        }
        else{
            int x=0;
            for(int j=2;j<arr[i];j++){
                if(arr[i]%j==0){
                    break;
                }
                else{
                    continue;
                }
            }
            if(a>0){
                count+=1;
            }
        }
    }
    printf("%d",count);
    return 0;
}