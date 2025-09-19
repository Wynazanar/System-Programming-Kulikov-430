#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

int counter = 0;

void* CounterAdding(void* value) {
    for (int i = 0; i < 1000000; i++) {
        counter++;
    }

    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, CounterAdding, NULL);
    pthread_create(&thread2, NULL, CounterAdding, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Counter value = %d\n", counter);

    return 0;
}