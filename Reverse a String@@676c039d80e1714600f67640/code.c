#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int a=strlen(str);
    for(int i=0;i<a;i++){
        printf("%c",str[a-i-1]);
    }
}