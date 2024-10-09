#include <stdio.h>
int main(){
    int arr[5]; 
    
    for (int i=0; i<5; i++){
        printf("성적을 입력해주세요 : ");
        fflush(stdout);
        scanf("%d",&arr[i]);
    }

    for (int i=0; i<5; i++){
        printf("학생의 성적은 %d \n",arr[i]);
    }

    return 0;
}
