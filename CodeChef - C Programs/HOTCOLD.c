#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a);
	    if(a>20)
	    printf("HOT\n");
	    else
	    printf("COLD\n");
	}
	return 0;
}

