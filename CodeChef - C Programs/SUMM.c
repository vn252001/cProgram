#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d %d",&a,&b,&c);
	    a=a+b;
	    if(a==c)
	    printf("YES\n");
	    else
	    printf("NO\n");
	    
	    
	}
	return 0;
}

