#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int a=strlen(str);
    char str2[a];
    for(int i=0;i<a;i++){
        str2[i]=str[a-i-1];
    }
    for(int i=0;i<a;i++){
        if(str[i]==str2[i]){
            continue;
        }
        else{
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}