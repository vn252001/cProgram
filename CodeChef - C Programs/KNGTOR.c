#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    printf("%d\n",a*5+b*7);
	}
	return 0;
}

