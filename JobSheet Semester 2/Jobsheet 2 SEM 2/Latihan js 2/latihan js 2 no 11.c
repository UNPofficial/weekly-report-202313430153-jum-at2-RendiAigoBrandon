#include <stdio.h>

// Created By Rendi Aigo brandon_23343082

struct Distance {
    int feet;
    float inch;
};

int main() {
    struct Distance dist1, dist2, sum;

    printf("1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist1.feet);
    printf("Enter inch: ");
    scanf("%f", &dist1.inch);

    printf("2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist2.feet);
    printf("Enter inch: ");
    scanf("%f", &dist2.inch);

    // adding feet
    sum.feet = dist1.feet + dist2.feet;

    // adding inches
    sum.inch = dist1.inch + dist2.inch;

    // changing to feet if inch is greater than or equal to 12
    while (sum.inch >= 12) {
        ++sum.feet;
        sum.inch -= 12;
    }

    printf("Sum of distances = %d\'-%.1f\"\n", sum.feet, sum.inch);

    return 0;
}
