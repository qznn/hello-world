#include <stdio.h>
main (void)
{
	int a,b,c,m,n,x,s;
	scanf("%d",&s);
	while(s>0)
	{
		x=0;
		s=s-1;
		scanf("%d%d",&m,&n);
		while(m<=n)
		{
			a=m/100;
			b=(m/10)%10;
			c=m%10;
			if(a*a*a+b*b*b+c*c*c==m)
			{
				printf("%d ",m);
				x=x+1;
			}
			m=m+1;
		}
		if(x==0) printf("-1");
	}
	return 0;
}
