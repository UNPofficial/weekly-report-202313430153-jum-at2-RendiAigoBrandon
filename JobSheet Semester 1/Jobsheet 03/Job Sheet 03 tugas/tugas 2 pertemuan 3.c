#include <stdio.h>

int main() {
    float c, k, f, r;

    printf("Input Suhu (Celcius): ");
    scanf("%f", &c);

    k = c + 273.15;
    f = (c * 1.8) + 32;
    r = c * 0.8;

    printf("Suhu dalam Kelvin: %.2f\n", k);
    printf("Suhu dalam Fahrenheit: %.2f\n", f);
    printf("Suhu dalam Reamur: %.2f\n", r);

    return 0;
}