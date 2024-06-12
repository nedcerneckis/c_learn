#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_HISTOGRAM_SIZE 15

int main(){
  int c, i, size, state;
  int cum_freq[MAX_HISTOGRAM_SIZE];

  for (i = 0; i < 10; i++)
    cum_freq[i] = 0;

  state = OUT;
  size = 0;
  while((c = getchar()) != EOF)
    if (c == ' ' || c == '\n' || c == '\t'){
      ++cum_freq[size];
      size = 0;
      state = OUT;
    } else if (state == OUT){
      ++size;
      state = IN;
    } else if (state == IN){
      ++size;
    }

  printf("digits =");
  for (i = 0; i < 10; i++)
    printf(" %d", cum_freq[i]);

  return 0;
}
