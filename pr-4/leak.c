#include <stdio.h>
#include <stdlib.h>

int main() {
    int* data = malloc(5 * sizeof(int));
    data[0] = 42;
    printf("First elem: %d\n", data[0]);
}