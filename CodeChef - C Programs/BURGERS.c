#include <stdio.h>

int main(void) {
    int i,n,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%d%d",&a,&b);
	if(a<b || a==b){
            printf("%d\n",a);
            
        }
        else{
            printf("%d\n",b);
        }
	}
	return 0;
}

