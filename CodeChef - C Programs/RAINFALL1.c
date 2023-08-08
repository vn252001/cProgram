#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a);
	    if(a<3)
	    printf("LIGHT\n");
	    else if(a<7)
	    printf("MODERATE\n");
	    else
	    printf("HEAVY\n");
	}
	return 0;
}

