#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a);
	    if(a<=300)
	    printf("%d\n",300*10);
	    else
	    printf("%d\n",a*10);
	}
	return 0;
}

