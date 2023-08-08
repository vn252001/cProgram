#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d%d",&a,&b);
	    c=a+b;
	    if(c%2==0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	    
	}
	return 0;
}

