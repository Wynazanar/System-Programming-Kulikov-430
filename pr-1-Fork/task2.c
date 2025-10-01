#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();

    if(pid < 0) {
        fprintf(stderr, "Error!");
    } else if (pid == 0) {
        pid_t pidChild = fork();
        if (pidChild < 0) {
            fprintf(stderr, "Error!");
        } else if (pidChild == 0) {
            printf("Я - внук. Мой pid: %d\n", getpid());
        } else {
            printf("Я - потомок. Мой pid: %d\n", getpid());
        }
    } else {
        printf("Я - родитель. Мой pid: %d\n", getpid());
    }
    
    return 0;
}