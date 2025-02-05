#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    if ((a==97)||(a==101)||(a==105)||(a==111)||(a==117)){
        printf("Vowel");
    }
    else if((a>=97)&&(a<=122)){
        printf("Consonant");
    }
    else if((a>=48)&&(a<=57)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}