#include<stdio.h>
int main(){
    int a,k,array2[a],array1[a];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&array2[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        array1[i]=array2[a+i-k];
    }
    for(int i=0;i<(a-k);i++){
        array1[a+i-k]=array2[i];
    }
    for(int i=0;i<a;i++){
        printf("%d\n",array1[i]);
    }
    return 0;
}