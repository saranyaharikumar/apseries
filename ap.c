#include <stdio.h>
int main(void)
{
    int n,s,i,d;
    printf("enter start no");
    scanf("%d",&s);
    printf("enter difference");
    scanf("%d",&d);
    printf("enter range");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d,\t",s);
        s=s+d;
        
    }
	return 0;
}
