#include<stdio.h>
int pallin(int);
int pallin(int x){
    if(x<0){
        return 0;
    }
    int new=0;
    int x1=x;
    while(x){
        int y=x%10;
        new=(new*10)+y;
        x=x/10;
    }
    if(new==x1){
        return 1;;
    }
    else{
        return 0;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<a;i++){
        count+=pallin(arr[i]);
    }
    printf("%d",count);
}