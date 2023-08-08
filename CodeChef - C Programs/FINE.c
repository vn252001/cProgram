#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a);
	    if(a<=70)
	    {
	        printf("0\n");
	    }
	    else if(a>70 && a<=100)
	    {
	        printf("500\n");
	    }
	    else
	    {
	        printf("2000\n");
	    }

	    
	}
	return 0;
}

