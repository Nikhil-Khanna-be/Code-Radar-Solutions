#include<stdio.h>
#include<string.h>

int main(){
    char A='a'',E='e',I='i',O='o',U='u';
    int count=0;
    char str[100];
    scanf("%s",str);
    int a=strlen(str);
    for(int i=0;i<a;i++){
        if(str[i]==A||str[i]==E||str[i]==I||str[i]==O||str[i]==U){
            count+=1;
        }
    }
    printf("%d",count);
}