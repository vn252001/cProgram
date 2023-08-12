#include <stdio.h>

int main(void) {
int n,i,x,y;
scanf("%d",&n); 
for(i=1;i<=n;i++)
{
    scanf("%d%d",&x,&y);
    if(y<=x+200  &&  y>=x)
    printf("YES\n");
    else
    printf("NO\n");} 
	return 0;
}

