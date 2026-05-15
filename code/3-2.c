#include <stdio.h>
#include <stdlib.h>

int cmp_asc(const int * a, const int * b) {
    return *a - *b;
}

int cmp_desc(const int * a, const int * b) {
    return *b - *a;
}


void print_arr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[] = { 5, 2, 8, 1, 9, 3 };
    int size = 6;

    qsort(arr, size, sizeof(int), cmp_asc); //정렬할 배열 포인터, 원소개수, 원소크기, 비교함수포인터)
    print_arr(arr, size);

    qsort(arr, size, sizeof(int), cmp_desc);
    print_arr(arr, size);

    return 0;
}
