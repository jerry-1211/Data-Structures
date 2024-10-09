#include <stdio.h>
int main(){
    int score[3][2];
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            if (j ==0){
                printf("수학 점수 입력 : ");
                fflush(stdout);
                scanf("%d",&score[i][j]);
            }else if (j ==1 ){
                printf("국어 점수 입력 : ");
                fflush(stdout);
                scanf("%d",&score[i][j]);
            }
        }
    }

    for(i=0;i<3;i++){
        printf("수학 점수 : %d , 국어 점수 : %d",
                score[i][0],score[i][1]);
    }

    return 0;
}