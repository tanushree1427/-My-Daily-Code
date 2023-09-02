#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n%4==0)
        {
            printf("Good\n");
        }
        else
        {
            printf("Not Good\n");
        }
    }
	
	return 0;
}

