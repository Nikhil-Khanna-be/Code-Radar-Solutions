#include<stdio.h>
int main(){
    int a,i=2;
    scanf("%d",&a);
if(a==1){
printf("Not Prime");}
else{
    while(i<a){
       
        if(a%i==0){
        printf("Not Prime");
    }i++;
    if(a==i)
    printf("Prime");

} }return 0;}