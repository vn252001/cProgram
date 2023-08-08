#include <stdio.h>

int main(void) {
    	int T;
	int X,Y;
	int A;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	    scanf("%d %d %d",&X,&Y,&A);
	    if(X<=A && A<Y){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	
	return 0;
	return 0;
}

