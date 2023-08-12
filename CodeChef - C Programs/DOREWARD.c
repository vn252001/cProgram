#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a);
	    if(a<=3)
	    printf("BRONZE\n");
	    else if(a>3 && a<=6)
	    printf("SILVER\n");
	    else
	    printf("GOLD\n");
	}
	return 0;
}

