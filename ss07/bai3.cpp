#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sochan = 0;
    printf("cac phan tu trong mang la: ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            sochan = 1; 
        }
    }
    if (sochan == 0) {
        printf("mang khong chua so chan.");
    }
	return 0;
}

