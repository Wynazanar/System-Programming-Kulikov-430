#include <stdio.h>
#include <stdlib.h>

void recursive_function(int n) {
    int local_x;
    printf("Вызов %2d: n=%d, Адрес local_x = %p\n", 50000000 - n, n, (void*)&local_x);
    if (n > 0) {
        recursive_function(n - 1);
    }
}

int main() {
    printf("Начало работы main\n");
    recursive_function(50000000);
    printf("Завершение работы main\n");
    
    return 0;
}