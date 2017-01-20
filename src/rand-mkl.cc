#include <stdlib.h>
#include <stdio.h>
#include <mkl_vsl.h>

int main()
{
  const size_t N = 1<<29L;
  const size_t F = sizeof(float);
  float* A = (float*)malloc(N*F);
  VSLStreamStatePtr rnStream;
  vslNewStream( &rnStream, // Init. RNG
                VSL_BRNG_MT19937, 1 );
  vsRngUniform(VSL_RNG_METHOD_UNIFORM_STD, rnStream, N, A, 0.0f, 1.0f);
  printf("Generated %ld random numbers.\nA[0]=%e\n", N, A[0]);
  free(A);
}
