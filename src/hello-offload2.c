#include <stdio.h>

__attribute__((target(mic))) void HelloFunction() {
    printf("\nHello World from coprocessor!\n");
    fflush(0);
}

int main(int argc, char * argv[] ) {
    printf("\nHello World from host!\n");

    #pragma offload target(mic)
    {
        HelloFunction();
    }
}
