#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int N,X;
        scanf("%d\t%d",&N,&X);
        if((N-X)>X)
        {
         printf("%d\n",X); 
        }
       
        else
        {
             printf("%d\n",(N-X));
           
        }
    }
	
	return 0;
}

