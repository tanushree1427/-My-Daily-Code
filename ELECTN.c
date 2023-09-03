#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,i;
       
        scanf("%d\t%d\n",&n,&x);
        int a[n];
        
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
         int count=0;
         for(int i=0;i<n;i++)
         {
            if(a[i]>=x)
            {
                count++;
            }
           
        }
    
        printf("%d\n",count);
        
    }

	return 0;
}

