#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d;
	    scanf("%d\t%d\t%d\t%d",&a,&b,&c,&d);
	    if(a>=b && c>=d)
	    {
	        printf("%d\n",a+c);
	    }
	    else if(a>=b && c<=d)
	    {
	        printf("%d\n",a+d);
	    }
	    else if(a<=b && c>=d)
	    {
	        printf("%d\n",b+c);
	    }
	    else
	    {
	        printf("%d\n",b+d);
	    }
	}
	return 0;
}

