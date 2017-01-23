#include <stdio.h>
#include <unistd.h>

void hist(const float * samples, int * const hist, const float group_width) {
  float group_width_rec = 1.0f / group_width;
  int sample_index = 0; 
  #pragma vector aligned
  for (sample_index = 0; sample_index < 1024; sample_index++) {
    const int bin = (int) (samples[sample_index] * group_width_rec);
    hist[bin]++;
  }
}

int main() {
  printf("Hello world! ");
  int i;
  int n = 20000;
  int j;
  int A[n];
  int B[n];
  int randV=0;

srand(time(NULL));
randV=rand();


for (i=0; i<n; i++)
    A[i]+=B[i]*randV;

}
