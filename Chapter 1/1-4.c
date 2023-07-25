#include <stdio.h>

int main() {
    float fahr, cel;
    int lower, upper, step;

    lower = 0;
    upper = 100; 
    step = 20;

    fahr = lower;
    printf("Cel \t Far\n");
    while (cel <= upper) {
        fahr = (9.0/5.0 * cel) +32.0;
        printf("%3.0f \t %6.1f\n", cel, fahr); 
        cel += step;
    }
    return 0;
}
