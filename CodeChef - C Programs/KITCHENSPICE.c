#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a);
	    if(a>=4 && a<7)
	    printf("MEDIUM\n");
	    else if(a<4)
	    printf("MILD\n");
	    else
	    printf("HOT\n");
	}
	return 0;
}

