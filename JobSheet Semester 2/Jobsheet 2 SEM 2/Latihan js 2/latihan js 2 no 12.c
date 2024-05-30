#include <stdio.h>

// Created By Rendi Aigo brandon_23343082

struct Complex {
    int imag;
    float real;
};

struct Number {
    struct Complex comp;
    int integers;
};

struct Container {
    struct Number num1;
    struct Number num2;
};

struct Storage {
    struct Container container1;
    struct Container container2;
};

struct Box {
    struct Storage storage1;
    struct Storage storage2;
};

struct Room {
    struct Box box1;
    struct Box box2;
};

int main() {
    // Kode utama
    return 0;
}
