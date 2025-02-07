#include <stdio.h>

int main() {
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf('*'*(a-i));
    }
    return 0;
}