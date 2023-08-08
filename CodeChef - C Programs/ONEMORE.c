#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&x);
	    if(x<=24)
	    printf("NO\n");
	    else
	    printf("YES\n");
	}
	return 0;
}

