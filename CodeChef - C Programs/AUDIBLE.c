#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a);
	     if(a>=67&&a<=45000)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

