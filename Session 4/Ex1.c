#include <stdio.h>
int main() {
    int N;
    printf("Nhap 1 so nguyen: \n", N);
    scanf("%d", &N);
    if( N % 3 ==0 && N % 5 ==0 )
    {
        printf("So %d chia het cho ca 3 va 5 \n", N);

    }
    else
    {
        printf("So %d khong chia het cho 3 va 5",N);
    }
    return 0;

}

