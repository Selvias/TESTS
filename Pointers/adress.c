#include <stdio.h>

int app(int *b);

int main() {

    int a = 0;

    app(&a);

    printf("%d\n", a);

    return 0;
}

int app(int *b) {

    printf("%d\n", *b);

    *b = + 1;

    return 0;
}
