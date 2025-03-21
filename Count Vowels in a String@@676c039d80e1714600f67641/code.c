#include<stdio.h>
#include<string.h>

int main(){
    char a='a',e='e',i='i',o='o',u='u',A='A',E='E',I='I',O='O',U='U';
    int count=0;
    char str[100];
    scanf("%s",str);
    int x=strlen(str);
    for(int i=0;i<x;i++){
        if(str[i]==a||str[i]==e||str[i]==i||str[i]==o||str[i]==u||str[i]==A||str[i]==E||str[i]==I||str[i]==O||str[i]==U){
            count+=1;
        }
    }
    printf("%d",count);
}