#include <stdio.h>
#include <math.h>

int kT_SoChinhPhuong(int num) {
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

void xuat_SoChinhPhuong(int n) {
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = n - 1; i > 0; i--) {
        if (kT_SoChinhPhuong(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    xuat_SoChinhPhuong(n);
    return 0;
}
