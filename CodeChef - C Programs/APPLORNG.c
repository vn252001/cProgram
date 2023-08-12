#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    c=a+b;
	}
	if(c<=n)
	    printf("YES\n");
	    else
	    printf("NO\n");
	return 0;
}

