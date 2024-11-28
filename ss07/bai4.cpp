#include <stdio.h>

int main() {
    int n; 
    int arr[100]; 
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n > 100) {
        printf("so phan tu khong hop le.\n");
        return 1;
    }

    printf("nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("cac phan tu cua mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

