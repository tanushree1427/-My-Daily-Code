#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d\t%d",&x,&y);
	    if(x*15>=2*y)
	    {
	        printf("yes\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	}
	return 0;
}

