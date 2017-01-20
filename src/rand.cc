#include <stdlib.h>
#include <stdio.h>

int main()
{
  const size_t N = 1<<29L;
  const size_t F = sizeof(float);
  float* A = (float*)malloc(N*F);
  srand(0); // Initialize RNG
  for (int i = 0; i < N; i++) {
    A[i]=(float)rand()/(float)RAND_MAX;
  }
  printf("Generated %ld random numbers.\nA[0]=%e\n", N, A[0]);
  free(A);
}
