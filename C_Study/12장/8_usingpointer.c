/* 신기한 [] 사용 */
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    int *parr ;
    parr = arr ;

    int sum = 0;
    
    printf("parr value %p \n" , parr);
    printf("arr value %p \n" , arr);

    while(parr-arr <= 4){
        sum += (*parr);
        parr ++ ;
        printf("sum의 값 : %d \n ", sum);
    }

    printf("내 시험 점수 평균 %d \n", sum/5);

    return 0;
}

