#include <stdio.h>

int main(void) 
{
	int i,n,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    if(a==b && (a>=1 && b>=1))
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}