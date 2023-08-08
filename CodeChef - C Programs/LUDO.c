#include <stdio.h>

int main(void) {
	int n,i,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&x);
	    if(x==6)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

