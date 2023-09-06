#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m,k;
	    scanf("%d\t%d\t%d",&n,&m,&k);
	    if(n+k<=m)
	    {
	        printf("Yes\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	}
	return 0;
}

