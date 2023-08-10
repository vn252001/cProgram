#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    if(a==b || a>b)
	    printf("0\n");
	    else
	    printf("%d\n",b-a);
	}
	return 0;
}

