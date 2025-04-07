#include<stdio.h>
#include<string.h>

int main(){
    char str;
    gets(&str);
    printf("%d",strlen(str));
}