#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    if(b>a)
	    printf("FIRST\n");
	    else if(a==b)
	    printf("ANY\n");
	    else
	    printf("SECOND\n");
	}
	return 0;
}

