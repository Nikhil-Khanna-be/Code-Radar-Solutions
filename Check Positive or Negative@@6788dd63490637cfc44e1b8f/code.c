#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a==0){
        printf("Zero");
    }
    if (a>0){
        printf("Positive");
    }
    else{
        prinf("Negative");
    }
    return 0;
}