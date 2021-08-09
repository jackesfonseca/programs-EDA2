#include <stdio.h>

int main(void) {
  int value;
  for(; scanf("%d",&value) > 0 && value != 42; printf("%d\n", value));
  return 0; 
}