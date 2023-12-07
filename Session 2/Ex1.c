#include <stdio.h>
#include <math.h>
int main(){
    // Khai bao gan gia tri bien hinh vuong
    // tinh chu vi, dien tich
    int square = 4;
    printf("Chu vi hinh vuong la: %d\n", 4*square);
    printf("Dien tich hinh vuong la: %d\n", square*square);
    //
    double a = 2 ,b = 3 , c =4 ;
    printf("Chu vi tam giac la: %.2lf\n", a+b+c);
    //
    double p = (a +b +c ) /2;
    // square root: can bac 2
    double area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Dien tich tam giac la: %.2lf\n", area );
    return 0;
}