#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char ten[50];
    char tacgia[50];
    float gia;
} Book;

int main() {
    int n;
    scanf("%d", &n);
    Book* books = (Book*)malloc(n * sizeof(Book));
    if (books == NULL) {
        printf("Khong du bo nho de cap phat\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%s", (books + i)->ten);
        scanf("%s", (books + i)->tacgia);
        scanf("%f", &(books + i)->gia);
    }
    for (int i = 0; i < n; i++) {
        printf("%s %s %.2f\n", (books + i)->ten, (books + i)->tacgia, (books + i)->gia);
    }
    free(books);
    return 0;
}
