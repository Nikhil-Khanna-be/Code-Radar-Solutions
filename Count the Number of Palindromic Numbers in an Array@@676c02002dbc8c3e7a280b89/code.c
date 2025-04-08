#include<stdio.h>
int pallin(x){
    int new=0;
    int x1=x;
    while(x){
        y=x%10;
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