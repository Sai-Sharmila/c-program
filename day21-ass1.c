#include<stdio.h>
main()
{
	int a,b,n,c,d;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
	for(d=n-1;d>=1;d--)
	{
		for(c=1;c<=d;c++)
		{
			printf("%d ",c);
		}
		printf("\n");
	}
}
