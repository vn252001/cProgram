#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t,m,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&m,&n);
	    if(m<=n)
	    printf("0\n");
	    else
	    printf("%d\n",m-n);
	}
	return 0;
}

