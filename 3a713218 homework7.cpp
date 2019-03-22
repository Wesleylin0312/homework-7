#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,n ,sum=0;
	printf("1+2+3...+n=?,n=");
	scanf("%d",&n);

	for(a=1;a<=n;a++)
	sum+=a;
		printf("1+2+3...+%d=%d\n",n,sum);
	
	system("pause");
	return 0;
	 
    
}
