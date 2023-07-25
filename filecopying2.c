#include <stdio.h>

void main() {
    int c;

    while(c != EOF) {
        putchar(c);
        c =getchar();
    }
}
