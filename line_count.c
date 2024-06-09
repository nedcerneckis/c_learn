#include <stdio.h>

int main(){
  int c, blanks, tabs, newline;
  blanks = 0, tabs = 0, newline = 0;
  while((c = getchar()) != EOF){
    if (c == ' '){
      ++blanks;
    }
    if (c == '\t'){
      ++tabs;
    }
    if (c == '\n'){
      ++newline;
    }
    printf("Blanks: %d | Tabs: %d | Newlines: %d\n", blanks, tabs, newline);
  }
}
