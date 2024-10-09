#include <stdio.h>
#include <stdlib.h>

int main(){
    int student;
    int i, input;
    int *score; 
    int sum = 0;

    printf("학생의 수는 ? : \n");
    scanf("%d",&student);

    score =(int *)malloc(student * sizeof(int));
    if (score==NULL){
        printf("메모리 할당에 실패했습니다.\n");
        return 1;
    }

    for (i=0;i<student;i++){
        printf("학생 %d의 점수 : \n",i);
        fflush(stdout);
        scanf("%d", &input);

        score[i] = input;
    }

    for(i=0;i<student;i++){
        sum += score[i];
    }

    printf("전체 학생 평균 점수 : %d \n", sum/student);
    free(score);
    return 0;
}
