#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);
	while(t--){
	   int X;
	   scanf("%d",&X);
	   if(X>=2000){
	       printf("YES\n");
	   }
	   
	   else{
	       printf("NO\n");
	   }
	}
	return 0;
}

