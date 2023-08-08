#include <stdio.h>
#include<math.h>
int main(void) {
	int i,n,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d %d\n",&a,&b);
	    printf("%d\n",b-a);
	}
	return 0;
}

