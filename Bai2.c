#include <stdio.h>
#include <math.h>

int is_chinh_phuong(int num) {
    if (num < 0) {
        return 0;
    }
    int sqrt_num = (int)sqrt(num);
    return sqrt_num * sqrt_num == num;
}

int dem_so_chinh_phuong(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (is_chinh_phuong(i)) {
            count++;
            printf("%d ", i);
        }
    }
    return count;
}

int main() {
    int n;
    printf("Nhap so nguyen duong n:\n");
    scanf("%d", &n);
    printf("Cac so chinh phuong nho hon %d la: \n", n);
    int so_luong = dem_so_chinh_phuong(n);
    printf("\nTong so chinh phuong: %d\n", so_luong);
    return 0;
}
