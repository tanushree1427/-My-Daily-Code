#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int Pa,Pb,Qa,Qb;
	    scanf("%d\t%d\t%d\t%d",&Pa,&Pb,&Qa,&Qb);
	    if(Pa>Qa && Pa>Qb || Pb>Qa && Pb>Qb)
	    {
	      printf("Q\n");
	    
	    }
	    
	  else if (Qa>Pa && Qa>Pb || Qb>Pa && Qb>Pb)
	  {
	      printf("P\n");
	  }
	    
	    else
	    {
	       printf("TIE\n"); 
	    }

	}
	return 0;
}

