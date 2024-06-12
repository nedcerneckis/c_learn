#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_HISTOGRAM_SIZE 15

int main(){
  int c, nw, nc, wc, state;
  int cum_freq[MAX_HISTOGRAM_SIZE];

  state = OUT;
  nw = nc = wc = 0;
  while((c = getchar()) != EOF){
    ++nc;
    if (c == ' ' || c == '\n' || c == '\t'){
      printf("%d", wc);
      wc = 0;
      state = OUT;  
    } else if (state == OUT){
      state = IN;
      ++wc;
      ++nw;
    }
  }

  
}
