#include <stdio.h>

int main(void)
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int y;
        scanf("%d",&y);
        if(y>100)
        {
            printf("%d\n",y-10);
        }
        else
        {
            printf("%d\n",y);
        }
    }
  return 0;
}