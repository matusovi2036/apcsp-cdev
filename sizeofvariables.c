#include<stdio.h>

int main()
{
  int a = 545;
  int b = a + a;
  int c = void;
  int d = [b, a];
  int e = unsigned int;
  int f = long int;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\nint b value: %d and size: %lu bytes\nint c value: %d and size: %lu bytes\nint d value: %d and size: %lu bytes\nint e value: %d and size: %lu bytes\nint f value: %d and size: %lu bytes\n", a, sizeof(a), b, sizeof(b), c, sizeof(c), d, sizeof(d), e, sizeof(e), f, sizeof(f));
}

