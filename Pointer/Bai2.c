#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong du bo nho de cap phat\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    
    free(arr);
    return 0;
}
