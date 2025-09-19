#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void* checkEven(void* value) {
    int number = *((int*)value);
    while(1) {
        if (number % 2 == 0) {
            printf("Number is even\n");
        } else {
            printf("Number is uneven\n");
        }
        usleep(10);
    }
    return NULL;
}

void* divisionNumber(void* value) {
    int* numbs = (int*)value;
    int num1 = numbs[0];
    int num2 = numbs[1];
    while(1) {
        if (num1 != 0 && num2 != 0) {
            printf("%d / %d = %f\n", num1, num2, (float)num1 / num2);
        } else {
            printf("Can't divide by zero!\n");
        }
        usleep(10);
    }
    return NULL;
}

void* addingNumbers(void* value) {
    int* numbs = (int*)value;
    int num1 = numbs[0];
    int num2 = numbs[1];
    printf("%d\n",num1);
    printf("%d\n",num2);

    while(1) {
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        usleep(10);
    }
    return NULL;
}

int main() {
    int num = 10;
    int numbs[] = {15, 3};
    pthread_t thread1, thread2, thread3;
    pthread_create(&thread1, NULL, checkEven, &num);
    pthread_create(&thread2, NULL, divisionNumber, numbs);
    pthread_create(&thread3, NULL, addingNumbers, numbs);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);

    return 0;
}