#include<stdio.h>
#include<string.h>

int main(){
    char a='a',e='e',i='i',o='o',u='u',A='A',E='E',I='I',O='O',U='U';
    int count=0;
    char str[100];
    scanf("%s",str);
    int x=strlen(str);
    for(int j=0;j<x;j++){
        if(str[j]==a||str[j]==e||str[j]==i||str[j]==o||str[j]==u||str[j]==A||str[j]==E||str[j]==I||str[j]==O||str[j]==U){
            count+=1;
        }
    }
    printf("%d",count);
}