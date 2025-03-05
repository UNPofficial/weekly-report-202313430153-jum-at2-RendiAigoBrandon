#include <stdio.h>
#define PI 3.14

int main() {
    float diameter, radius, volume, luasPermukaan;

    diameter = 12.0; // diameter bola basket
    radius = diameter / 2;

// Rumus 
    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    luasPermukaan = 4 * PI * radius * radius;

    printf("Volume bola: %.2f cm^3\n", volume);
    printf("Luas permukaan bola: %.2f cm^2\n", luasPermukaan);

    return 0;
}