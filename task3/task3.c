#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    printf("Адрес массива а: %p\n", (void*)a);
    printf("Адрес первого элемента &a[0]: %p\n", (void*)&a[0]);
    printf("Адрес второго элемента &a[1]: %p\n", (void*)&a[1]);
    printf("Адрес третьего элемента &a[2]: %p\n", (void*)&a[2]);
    printf("Адрес четвертого элемента &a[3]: %p\n", (void*)&a[3]);
    printf("Адрес пятого элемента &a[4]: %p\n", (void*)&a[4]);

    printf("Адрес a + 1: %p\n", (void*)(a + 1));
    printf("Значение *(a + 1): %d\n", *(a + 1));

    return 0;
}