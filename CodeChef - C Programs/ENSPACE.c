#include <stdio.h>

int main(void) {
	
	int i,n,a,b,c,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d %d",&a,&b,&c);
	    x=b+c*2;
	    if(x==a || x<a)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

