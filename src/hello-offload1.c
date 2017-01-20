#include <stdio.h>

int main(int argc, char * argv[])
{
    printf("\nHello World from host!\n");

#pragma offload target(mic)
    {
        printf("\nHello World from coprocessor!\n");
        fflush(0);
    }
    printf("\nBye\n");
}
