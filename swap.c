
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
  srand(time(NULL));
  int first[10];
  int *fp = first;
  int i;
  printf("first array\n");
  for(i = 0; i < 10; i++) {
    first[i] = rand();
    if(i == 9)
      first[i] = 0;
    printf("%d:%d \n", i, first[i]);
  }

  int second[10];
  int *sp = second;
  int j;
  printf("\nsecond array\n");
  for(j = 0; j < 10; j++) {
    *(sp + j) = *(fp + (9 - j));
    printf("%d:%d \n", j, *(sp + j));
  }
  
  return 0;
}
