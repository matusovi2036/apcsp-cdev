#include <stdio.h>
#include <math.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}

  int radius;
  printf("Please enter your raduis: ");
  fgets(input);

// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
int areaOfCircle(float radius){

float result = acos(-1) * radius * radius;
return result;
}

int main(int argc, char* argv[]) 
{
  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2

  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle: \n");
  printf(areaOfCircle(radius));
  // add your code below to call areaOfCircle function with values between
  // start and end
}
