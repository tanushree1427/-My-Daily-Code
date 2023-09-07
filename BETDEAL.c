#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int A,B;
	    scanf("%d\t%d",&A,&B);
	    if((100-(A*100/100))<(200-(B*200/100)))
	    {
	        printf("FIRST\n");
	    }
	    else if((100-(A*100/100))>(200-(B*200/100)))
	    {
	        printf("second\n");
	    }
	    else
	    {
	        printf("both\n");
	    }
	}
	return 0;
}

