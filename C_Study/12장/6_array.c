/* 신기한 [] 사용 */
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("3[arr] : %d \n",arr[3]);
    printf("*(3+a) : %d \n",*(arr + 3));
    return 0;
}