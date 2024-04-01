#include <stdio.h>
void xuatSoNguyen2ChuSo_BoiCua7() {
    for (int i = 10; i < 100; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");
    xuatSoNguyen2ChuSo_BoiCua7();
    return 0;
}
