#include <stdio.h>
int main()
{
    float so_cu, so_moi;
    printf("Nhap so dien cu: \n");
    scanf("%f", &so_cu);

    printf("Nhap so dien moi: \n");
    scanf("%f", &so_moi );
    float so_dien = so_moi - so_cu;

    if (so_dien >= 0 && so_dien < 50)
    {
        printf("gia tien = 10.000");
    } else if (so_dien >= 50 && so_dien <100)
    { printf("gia tien = 15.000") ;
    } else if (100 <= so_dien <150)
    { printf("gia tien = 20.000");
    } else if (150 <= so_dien < 200)
    { printf("gia tien = 25.000");
    } else if (200 <= so_dien)
    { printf("gia tien = 30.000");
    }
    return 0;
}