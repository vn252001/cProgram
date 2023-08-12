#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    if(3*a<2*b)
	    printf("%d\n",3*a);
	    else
	    printf("%d\n",2*b);
	}
	return 0;
}

