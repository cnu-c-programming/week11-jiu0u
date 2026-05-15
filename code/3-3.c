
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_str(const void * a, const void * b) {
    return strcmp(*(char **) a, *(char **)b); //?..
}


int main() {
    const char* words[] = { "banana", "apple", "ant", "orange" };
    int size = 4;

    qsort(words, size, sizeof(const char *), cmp_str); //정렬할 배열 포인터, 원소개수, 원소크기, 비교함수포인터)
    
    for (int i = 0; i < size; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
