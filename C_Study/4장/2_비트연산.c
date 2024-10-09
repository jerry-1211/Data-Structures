#include <stdio.h>
int main(){
    int a = 0xAF; //10101111
    int b = 0xB5; //10110101

    printf("%x \n", a&b) ; // and
    printf("%x \n", a|b) ; // or
    printf("%x \n", a^b) ; // xor
    printf("%x \n", ~a) ; // 반전
    printf("%x \n", a<<2) ; // 쉬프트 
    printf("%x \n", b>>3) ; 

    return 0;
}