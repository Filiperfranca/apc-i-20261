#include <stdio.h>

int main(void)
{

    char a;
    short int b;
    int c;
    long int d;
    long long int e;
    float f;
    double g;
    long double h;

    printf("char: %zu\n", sizeof(a));
    printf("short int: %zu\n", sizeof(b));
    printf("int: %zu\n", sizeof(c));
    printf("long int: %zu\n", sizeof(d));
    printf("long long int: %zu\n", sizeof(e));
    printf("float: %zu\n", sizeof(f));
    printf("double: %zu\n", sizeof(g));
    printf("long double: %zu\n", sizeof(h));

    return 0;
}