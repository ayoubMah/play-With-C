#include <stdio.h>

double fx (int x){
  int result;
  result = (x * x) - 612;
  return result; 
}

double fPrimex (int x){
  return 2 * x; 
}

double newtone (int x){
  return x - (fx(x) / fPrimex(x)); 
}

int main(void) {
  double x = 10;
  for (int i = 1; i <= 10; i++) {
    x = newtone(x);
    printf("Iteration %d : %f\n",i,x);
  }

  return 0;
}
