#include <stdio.h>
int main(){
    int num;
    printf("몇 개의 과목 점수를 입력 받을 것인가요 ? :");
    fflush(stdout);
    scanf("%d",&num);

    printf("각 과목의 점수를 입력해주세요.");
    double sum = 0;
    printf("\n");

    for(int i=0 ; i<num ; i++){
        int tmp ;
        printf("과목 %d : ",i+1);
        fflush(stdout);
        scanf("%d",&tmp);
        printf("\n");

        sum += tmp ;
    }

    printf("전체 과목의 평균은 %.2f \n", sum/4);
    
    return 0;
}