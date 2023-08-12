#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a+b+(a*b);
	if(c!=111)
	printf("NO\n");
	else
	printf("YES\n");
	return 0;
}

