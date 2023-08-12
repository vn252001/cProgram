#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    if(a>10*b)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

