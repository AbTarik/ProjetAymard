#include "functions.c"

int main() {
    int a = 50, b = 10;
    printf("Si a = %d et b = %d\n\n", a, b);
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %d\n", a, b, dvd(a, b));

    return 0;
}
