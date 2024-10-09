#include <stdio.h>
int main(){
    int num ; 
    printf("아무 숫자를 입력해주세요 : ");
    fflush(stdout);
    scanf("%d",&num);

    if (num == 7){
        printf("행운의 숫자 %d 를 뽑으셨네요.",num);
    }else if(num == 4) {
        printf("죽음의 숫자를 뽑으셨네요.",num);
    }else {
        printf("행운의 숫자 안 뽑으셨네요.",num);
    }
    return 0; 
}