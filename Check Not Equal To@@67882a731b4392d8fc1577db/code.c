#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%a %b",&a,&b);
    if (a!=b){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}