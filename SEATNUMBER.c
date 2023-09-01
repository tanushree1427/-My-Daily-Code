#include <stdio.h>

int main(void) 
{
  int T;
  scanf("%d",&T);
  while(T--)
  {
      int N;
      scanf("%d",&N);
      if(N<=15 )
      {
          if(N<=10)
          {
              printf("Lower Double\n");
          }
          else
          {
              printf("Lower Single\n");
          }
      }
      else
      {
          if(N<=25)
          {
              printf("Upper Double\n");
          }
          else
          {
              printf("Upper single\n");
          }
      }
  }
	return 0;
}

