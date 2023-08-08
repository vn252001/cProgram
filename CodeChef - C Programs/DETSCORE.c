#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d%d",&a,&b);
	   printf("%d\n",a/10*b);
	}
	return 0;
}

