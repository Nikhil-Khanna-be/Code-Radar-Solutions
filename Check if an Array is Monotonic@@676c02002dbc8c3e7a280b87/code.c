#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a],arr1[a],arr2[a];
    for(int i=0;i<a;i++){
        arr1[i]=arr[i];
    }
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<a;i++){
        arr2[i]=arr1[a-i-1];
    }
    int acs=0;
    int des=0;
    for(int i=0;i<a;i++){
        if(arr[i]==arr1[i]){
            acs+=1;
        }
    }
    for(int i=0;i<a;i++){
        if(arr[i]==arr2[i]){
            des+=1;
        }
    }
    if(acs==a||des==a){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
}