#include <stdio.h>
int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d\t%d",&x,&y);
	    if(x*1.07>=y)
	    {
	        printf("yes\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	    
	    
	}

}

