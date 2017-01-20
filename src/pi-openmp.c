#define NSET 1000000
int main(int argc, const char** argv)
{
  long int i;
  float num_inside, Pi;
  num_inside = 0.0f;

  #pragma offload target (MIC)
  #pragma omp parallel for reduction(+:num_inside)
  for(i = 0; i < NSET; i++)
  {
    float x, y, distance_from_zero;
    // Generate x, y random numbers in [0,1)
    x = (float)(rand()) / (float)(RAND_MAX + 1);
    y = (float)(rand()) / (float)(RAND_MAX + 1);
    distance_from_zero = sqrt(x*x + y*y);
    if (distance_from_zero <= 1.0f)
    num_inside += 1.0f;
  }
  Pi = 4.0f * (num_inside / NSET);
  printf("Value of Pi = %f\n",Pi);
}
