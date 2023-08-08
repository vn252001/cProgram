#include <stdio.h>

int main(void) {
    int n,x;
    scanf("%d", &n);
    while(n!=0)
    {
       
        scanf("%d", &x);
        if(1<=x && x<=4)
        {
            printf("yes \n");
        }
        else 
        printf("no \n");
        n--;
    }
	// your code goes here
	return 0;
}

