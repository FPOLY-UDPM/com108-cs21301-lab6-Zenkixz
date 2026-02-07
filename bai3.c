/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỰ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];
    for(i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    // Sắp xếp mảng theo thứ tự giảm dần
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(mang[i] < mang[j]) {
                temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep theo thu tu giam dan la: ");
    for(i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}