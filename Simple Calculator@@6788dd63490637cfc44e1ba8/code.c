#include <stdio.h>

int main() {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    int p= a+b;
    if (c=='+'){
        printf("%d",p);
    }
    else if (c=='-'){
        printf("%d",a-b);
    }
    else if (c=='*'){
        printf("%d",a*b);
    }
    else if (c=='/'){
        printf("%d",a/b);
    }
    else{
        printf("Error");
    }
    return 0;
}