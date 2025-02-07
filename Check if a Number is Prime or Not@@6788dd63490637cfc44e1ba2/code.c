#include <stdio.h>

int main() {
    int a,i;
    scanf("%d",&a);
    if ((a==2)||(a==3)){
        printf("Prime");
    }
    else{
        for(i=2;i<a;i++){
            if (a%i!=0){
                printf("Prime");
                break;
            }
            else if(a%i==0){
                printf("Not Prime");
            
            }
        }
    }
    return 0;
}