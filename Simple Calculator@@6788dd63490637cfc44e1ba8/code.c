#include <stdio.h>

int main() {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    int p= a+b;
    int s=a-b;
    int m=a*b;
    int d=a/b;
    if (c=='+'){
        printf("%d",p);
    }
    else if (c=='-'){
        printf("%d",s);
    }
    else if (c=='*'){
        printf("%d",m);
    }
    else if (c=='/'){
        if (b==0){
            printf("error");
        }
        else{
            printf("%d",d);
        }
    }
    else{
        printf("error");
    }
    return 0;
}