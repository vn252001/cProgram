#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    if(a>b)
	    printf("A\n");
	    else
	    printf("B\n");
	}
	return 0;
}

