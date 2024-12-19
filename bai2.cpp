#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Vi tri cua phan tu %d trong mang la: %d\n", x, i);
            found = 1;
            break; 
        }
    }

    if (found == 0) {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}
