/* 신기한 [] 사용 */
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *parr ;
    parr = arr ;
    printf("arr array : %d ",arr[1]);
    printf("parr array : %d",parr[1]);
    
    return 0;
}


