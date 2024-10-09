#include <stdio.h>
int main() {
    int sum = 0 , cnt = 0 ;

    while(1){
        cnt += 1 ;
        sum += cnt ;
        if (cnt == 100) break;    
        printf("%d ",sum);
    }
    printf("%d \n",sum);
    return 0;
}