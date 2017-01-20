#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* thread(void* arg) {
    while(1);
    return NULL;
}

int main() {
    int i;
    int n = sysconf(_SC_NPROCESSORS_ONLN);
    printf("\nSpawning %d threads that run in an infinite loop, doing nothing...\n(Press ^C to terminate)\n", n);
    for (i = 0; i < n-1; i++) {
        pthread_t thr;
        pthread_create(&thr, NULL, &thread, NULL);
    }
    thread(NULL);
}
