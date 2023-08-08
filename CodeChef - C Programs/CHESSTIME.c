#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a);
	    int ans=(a*60)/20;
	    printf("%d\n",ans);
	    
	}
	
	return 0;
}

