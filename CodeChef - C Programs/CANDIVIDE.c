#include <stdio.h>

int main(void) {
  // your code goes here
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      int N;
      scanf("%d",&N);
      if(N%3==0)
      {
          printf("\nYES");
      }
      else
      {
          printf("\nNO");
      }
  }
  return 0;
}