#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
    scanf("%d", &t);
    while(t!=0)
    {
        int a;
        scanf("%d", &a);
        if (a>=30)
        {
            printf("yes \n");
        }
        else
        printf("no \n");
        t--;
    }
	return 0;
}

