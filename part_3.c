#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr;
    for (int i = 0; i < 10; i++) {
        arr = (int*) malloc(sizeof(int));
        *arr = i;
        printf("%d ", *arr);
    }

    free(arr);
    free(arr);
    return 0;
}