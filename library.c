#include <stdio.h>
#include <math.h>
int main(){
    //khai báo gán giá trị biến hình vuông
    // tính chu vi và diện tích
    int edge = 4;
    printf("chu vi hình vuong là: %d\n", 4*edge);
    printf("dien tich hinh vuong là: %d\n", edge*edge);
    //tính chu vi và diện tích tam giác
    int a =2, b= 3, c= 4;
    printf("chu vi tam giác là: %.2lf\n", a+b+c);
    double p = (a + b +c) /2;
    // square root: dùng căn bậc 2
    double area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Dien tich tam giac la: %.2lf\n", area );

return 0;

}
