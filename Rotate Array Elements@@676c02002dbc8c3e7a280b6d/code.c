#include<stdio.h>
int main(){
    int a,k,array[a],array1[a];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        array1[i]=array[a-k-i];
    }
    for(int i=0;i<(a-k);i++){
        array1[a-k+i]=array[i];
    }
    for(int i=0;i<a;i++){
        printf("%d\n",array1[i]);
    }
    return 0;
}