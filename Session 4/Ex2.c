#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap canh a,b,c: ", a, b, c);
    scanf("%d%d%d", &a, &b, &c);



    if (a == b || a == c || b == c) {
        if (a + b > c && a + c > b && b + c > a) {
            printf("Tam giac can.");
        }
    }
    if (a ^ 2 + b ^ 2 == c ^ 2 || a ^ 2 + c ^ 2 == b ^ 2 || b ^ 2 + c ^ 2 == a ^ 2) {
        if (a + b > c && a + c > b && b + c > a) {
            printf(" Tam giac vuong.");
        }
    }
    if (a == b || a == c || b == c) {
        if (a + b > c && a + c > b && b + c > a) {
            if (a ^ 2 + b ^ 2 == c ^ 2 || a ^ 2 + c ^ 2 == b ^ 2 || b ^ 2 + c ^ 2 == a ^ 2)
                printf("Tam giac vuong can.");
        }
    }
    if (a == b == c)
    {
        printf("Tam giac deu.");
    }
    else if (a + b > c && a + c > b && b + c > a)
    {
        printf("Tam giac thuong.");
    }

    return 0;
}

