#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d %d",&a,&b,&c);
	    printf("%d\n",(b-c)*a);
	}
	return 0;
}

