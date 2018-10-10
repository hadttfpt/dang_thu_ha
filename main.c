#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    float nuachuvi;
    printf("nhap gia tri cua a\n", a);
    scanf("%d", &a);
    printf("nhap gia tri cua b\n", b);
    scanf("%d", &b);
    printf("nhap gia tri cua c\n", c);
    scanf("%d", &c);
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("do dai tam giac khong the nho hon hoac bang 0\n");
        exit(1);
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("tong hai canh cua mot tam giac luon lon hon canh con lai(theo bat dang thuc tam giac)\n");
        exit(2);
    } else {
        nuachuvi = (float) (a + b + c) / 2;
        printf("nua chu vi tam giac la p=%f", nuachuvi);
        scanf("%.2f", &nuachuvi);
    }

    return 0;
}