#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,x,y,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&x,&y);
	    a=2*x;
	    b=5*y;
	    if(a>b)
	    printf("Chocolate\n");
	    else if(a==b)
	    printf("Either\n");
	    else
	    printf("Candy\n");
	}
	return 0;
}

