#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();

    if(pid < 0) {
        fprintf(stderr, "Error!");
    } else if (pid == 0) {
        printf("Я - дочерний процесс. Мой pid: %d\n", getpid());
    } else {
        printf("Я - родительский процесс. Мой pid: %d\n", getpid());
    }
    
    return 0;
}