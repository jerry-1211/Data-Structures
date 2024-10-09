#include <stdio.h>
int main() {
    int arr[5] = {1,2,3,4,5};
    int i ;
    int *parr ;
    parr = &arr[0];

    for(i=0;i<5;i++){
        printf("arr[%d]의 주소값 : %p \n",i, &arr[i]);
    }

    printf("arr[1]의 주소값 : %d\narr[0] + 1의 주소값 : %d\n", arr[1],*(parr+1));
    return 0 ;
}