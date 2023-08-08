#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,x,y;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&x,&y);
	    if(x>y)
	    printf("LOSS\n");
	    else if(x==y)
	    printf("NEUTRAL\n");
	    else
	     printf("PROFIT\n");
	}
	return 0;
}

