#include <mpi.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int i, namelen, rank, size;
    char name[MPI_MAX_PROCESSOR_NAME];

    MPI_Init(&argc, &argv);

    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Get_processor_name(name, &namelen);

    if (rank == 0)
        printf("Rank 0 says: MPI World size = %d processes\n", size);
    printf("Hello World from rank %d running on %s\n", rank, name);

    MPI_Finalize();

    return(0);
}
