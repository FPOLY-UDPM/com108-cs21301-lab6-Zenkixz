/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

// Hàm nhập mảng
void nhapMang(int mang[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
}

// Hàm tìm giá trị lớn nhất
int timMax(int mang[], int n) {
    int max = mang[0];
    for (int i = 1; i < n; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
    }
    return max;
}

// Hàm tìm giá trị nhỏ nhất
int timMin(int mang[], int n) {
    int min = mang[0];
    for (int i = 1; i < n; i++) {
        if (mang[i] < min) {
            min = mang[i];
        }
    }
    return min;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];

    nhapMang(mang, n);

    int max = timMax(mang, n);
    int min = timMin(mang, n);

    printf("Gia tri lon nhat trong mang: %d\n", max);
    printf("Gia tri nho nhat trong mang: %d\n", min);

    return 0;
}
