#include <stdio.h>

int main() {
    char a[10];
    int b;
    char c[10];
    scanf("%s %d",&a,&b);
    scanf("%s",&c);
    printf("Name: %s\nAge: %d\nHobby: %s",a,b,c);
    return 0;
}