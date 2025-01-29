#include <stdio.h>

int main() {
    char a[];
    int b;
    char c[];
    scanf("%s %d",&a,&b);
    scanf("%s",&c);
    printf("Name: %s\nAge: %d\nHobby: %s",a,b,c);
    return 0;
}