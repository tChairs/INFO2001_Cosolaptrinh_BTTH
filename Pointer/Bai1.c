#include <stdio.h>

void nhap(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
}

void in(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int timkiem(int* arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    nhap(arr, n);
    in(arr, n);
    int x;
    scanf("%d", &x);
    int index = timkiem(arr, n, x);
    if (index != -1) {
     printf("%d\n", index + 1);
    } else {
        printf("Khong tim thay phan tu %d trong mang\n", x);
    }

    
    return 0;
}
