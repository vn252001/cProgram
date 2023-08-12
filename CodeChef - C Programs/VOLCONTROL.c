#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int i,n,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    printf("%d\n",abs(a-b));
	}
	return 0;
}

