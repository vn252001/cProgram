#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    if(b>=a*3)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

