#include <stdio.h>
int main(){
    /*
    float a = 3.141592f;
    double b = 3.141592;
    printf("a : %d \n",a);
    printf("b : %o \n",b);
    */

    float a = 3.141592f ;
    double b =3.141592f;
    int c = 123;
    
    printf("a : %.2f \n",a);
    printf("c : %5d \n",c);
    printf("b : %6.3f \n",b);

    return 0 ;
}