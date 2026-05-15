#include <stdio.h>


typedef int (*BinOp)(int, int);

int add(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }
int sub(int a, int b) { return a - b; }

int compute(int a, int b, BinOp op) {
    if (op == NULL) { printf("%s\n", "Null pointer"); }
    else if (op == add) { return add(a, b); }
    else if (op == mul) { return mul(a, b); }
    else if (op == sub) { return sub(a, b); }
    return -1;
}


int main() {
    int a = 10, b = 5;

    printf("%d\n", compute(a, b, add));
    printf("%d\n", compute(a, b, sub));
    printf("%d\n", compute(a, b, mul));
    printf("%d\n", compute(a, b, NULL));

    return 0;
}
