#include <stdio.h>

int main() {
    int arr[5];
    printf("nhap 5 phan tu cho mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("cac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

