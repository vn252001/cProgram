#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a,b,c,d;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d %d",&a,&b,&c);
	    d=(2*a)+(2*b);
	    d=d*c;
	    printf("%d\n",d);
	}
	return 0;
}

