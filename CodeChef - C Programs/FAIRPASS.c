#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    if(a>=b || a==b)
	    printf("NO\n");
	    else
	    printf("YES\n");
	}
	return 0;
}

