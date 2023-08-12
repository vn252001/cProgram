#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a,r;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a);
	    r=a%10;
	    printf("%d\n",r);
	}
	return 0;
}

