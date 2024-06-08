#include <stdio.h>

int main(){
  float fahr, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("fahr | celcius\n");
  while (fahr <= upper){
    celcius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0fF   %6.1fC\n", fahr, celcius);
    fahr = fahr + step;
  }
  printf("\n--------------\n");
  
  lower = -100;
  upper = 100;
  step = 20;

  celcius = lower;
  printf("celcius | fahr\n");
  while(celcius <= upper){
    fahr = (celcius/(5.0/9.0))+32.0;
    printf("%6.1fC   %3.0fF\n", celcius, fahr);
    celcius = celcius + step;
  }
}
