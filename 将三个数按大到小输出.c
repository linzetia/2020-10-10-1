//将三个数按大到小输出

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入三个数\n");
	scanf("%d %d %d",&a,&b,&c);
	if (a < b)
	{
		int tem = b;
		b = a;
		a = tem;

	}
	
	if (a <c)
	{
		int tem = c;
		c = a;
		a = tem;
	}
	
	if (b < c)
	{
		int tem = c;
		c = b;
		b = tem;
		
	}
	printf("%d %d %d",a, b,c);
	return 0;
}