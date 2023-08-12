#include <stdio.h>

int main(void) {
	// your code goes here
	int i,a,n,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    printf("%d\n",a-b);
	}
	return 0;
}

