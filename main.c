#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    pid_t parent_pid = getpid();
    printf("Hello from the parent (pid=%d)!\n", (int)parent_pid);

    pid_t child_pid = fork();
    if (0 > child_pid) {
        printf("PIZDEC Can't create a child!");
        return -1;
    } else if (0 == child_pid) {
        printf("Hello from child! My pid: %d\n", (int)getpid());
        return 0;
    }

    waitpid(child_pid, NULL, 0);
    printf("Hello from parent again!\n");

    return 0;
}
