#include <stdio.h>
int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d\t%d\t%d",&a,&b,&c);
	    if(((a+b)%2!=0) || ((b+c)%2!=0) || ((c+a)%2!=0))
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

