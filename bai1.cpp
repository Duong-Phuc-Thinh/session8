#include <stdio.h>

int main() {
    int N; 
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &N);

    int arr[N];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Cac phan tu cua mang theo thu tu nguoc lai la:\n");
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
